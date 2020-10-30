#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <semaphore.h>

int main(int argc, char *argv[]){
	
	pid_t pid = 1;
	sem_t sem_compartido;
	char caracter_leido;
	int *contador_compartido;
	int estado, shmid, fd, contador_local;
	
	/* Creamos el semaforo sin nombre compartido y lo inicializamos en 1 (abierto) */
	if(sem_init(&sem_compartido, 1, 1) < 0){
		perror("creacion semaforo");
		exit(EXIT_FAILURE);
	}
	
	/* Creamos el segmento de memoria compartida */	
	if((shmid = shmget(IPC_PRIVATE, sizeof(int), 0666)) < 0){
		perror("shmget");
		exit(EXIT_FAILURE);
	}
	printf("ARGC: %d\n", argc);	
	contador_compartido = shmat(shmid, 0, 0);
	*contador_compartido = 0;
	system("ipcs -sm");
	
	/* Iteramos por cada archivo que se haya pasado como argumento en la linea de comandos.
	 * La iteración empieza en k = 2 porque la posición 0 es el nombre del progra,a y la posición
	 * 1 es la letra a comparar
	*/
	for(int k = 2; k < argc; k++){
		/* Chequeamos al inicio de cada iteración que sea solamente
		 * el proceso padre el que cree los forks
		 */
		if(pid != 0){
			printf("padre fork %d\n",k);
			if((pid = fork()) < 0){
				perror("fork");
				exit(EXIT_FAILURE);
			}
				
			if(pid == 0){
				printf("Hijo\n");
				int valor;
				sem_getvalue(&sem_compartido, &valor);
				printf("sem compartido %d\n", valor);
				/* Proceso Hijo: Se conecta al sector de memoria compartida */
				if((contador_compartido = shmat(shmid, 0, 0)) < (int *)0){
					perror("shmat");
					exit(EXIT_FAILURE);
				}
				printf("contador compartido %d\n", *contador_compartido);	
				/*if((contador_local = malloc(sizeof(int))) == NULL){
					perror("malloc");
					exit(EXIT_FAILURE);
				}*/

				/* Los procesos hijos van abriendo los archivos */
				if((fd = open(argv[k], O_RDONLY)) < 0){
					perror("open");
					exit(EXIT_FAILURE);
				}
				/* Leemos el archivo y comparamos cada caracter con el que
				 * se paso por la linea de comandos, en caso de que se encuentre
				 * uno se accede a la sección crítica utilizando el semáforo
				 * compartido y aumentamos el contador en 1 */	
				while(read(fd,&caracter_leido,sizeof(char))){
					printf("caracter leido %c\n",caracter_leido);
					if(strcmp(argv[1], &caracter_leido) == 0){
						if(sem_wait(&sem_compartido) < 0){
							perror("sem_wait");
							exit(EXIT_FAILURE);
						}
	
						contador_local = *contador_compartido;
						contador_local++;
						printf("contador local %d\n",contador_local);
						*contador_compartido = contador_local;

						if(sem_post(&sem_compartido) < 0){
							perror("sem_post");
							exit(EXIT_FAILURE);
						}

					}
				}
				/* Cerramos el archivo */
				if(close(fd) < 0){
					perror("close");
					exit(EXIT_FAILURE);
				}		
			}	
		}
	}
	/* Hacemos que todos los procesos al llegar a este punto se de-attacheen de la memoria compartida */
	if(shmdt(contador_compartido) < 0){
		perror("shmdt");
		exit(EXIT_FAILURE);
	}
	/* El proceso padre espera a que finalicen los hijos y elimina el Semáforo y la Memoria Compartida*/
	if(pid != 0){
		while(wait(&estado) < 0);
		printf("Se encontraron %d ocurrencias del caracter %s\n", *contador_compartido, argv[1]);
		printf("Eliminamos el semáforo y la memoria compartida\n");
		if(shmctl(shmid, IPC_RMID, 0) < 0){
			perror("shmctl");
			exit(EXIT_FAILURE);
		}
		if(sem_destroy(&sem_compartido)){
			perror("sem_destroy");
			exit(EXIT_FAILURE);
		}

		system("ipcs -ms");

	}
	exit(EXIT_SUCCESS);
}
