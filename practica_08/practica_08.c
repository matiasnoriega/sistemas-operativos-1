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
#include <sys/sem.h>

int semid;

void reservar(int semaforo){
	struct sembuf buf;
	buf.sem_num = semaforo;
	buf.sem_op = -1;
	buf.sem_flg = 0;

	semop(semid, &buf, 1);
}

void liberar(int semaforo){
	struct sembuf buf;
	buf.sem_num = semaforo;
	buf.sem_op = 1;
	buf.sem_flg = 0;

	semop(semid, &buf, 1);
}

int main(int argc, char *argv[]){
	
	pid_t pid = getpid();
	int cantidad_procesos_hijos = argc - 2;
	char caracter_leido;
	void *memoria_compartida = (void *)0;
	int estado, shmid;
	int *contador_compartido;
	/* Creamos el semaforo sin nombre compartido y lo inicializamos en 1 (abierto)
	if(sem_init(&sem_compartido, 1, 0) < 0){
		perror("creacion semaforo");
		exit(EXIT_FAILURE);
	}*/

	if((semid = semget(IPC_PRIVATE, cantidad_procesos_hijos, 0600)) < 0){
		perror("semget");
		exit(EXIT_FAILURE);
	}
	/*Inicializamos los semaforos, el primero en 1 y el resto en 0*/
	semctl(semid, 0, SETVAL, 1);
	for(int i = 1; i < cantidad_procesos_hijos; i++){
		semctl(semid, i, SETVAL, 0);
	}
	
	/* Creamos el segmento de memoria compartida */	
	if((shmid = shmget(IPC_PRIVATE, sizeof(int), 0666)) < 0){
		perror("shmget");
		exit(EXIT_FAILURE);
	}
	printf("ARGC: %d\n", argc);	
	memoria_compartida = shmat(shmid, 0, 0);
	contador_compartido = (int *)memoria_compartida;
	*contador_compartido = 0;
	system("ipcs -sm");
	
	/* Iteramos por cada archivo que se haya pasado como argumento en la linea de comandos.
	 * La iteración empieza en k = 2 porque la posición 0 es el nombre del progra,a y la posición
	 * 1 es la letra a comparar
	*/
	for(int k = 0; k < cantidad_procesos_hijos; k++){
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
				int valor,fd;
				/*sem_getvalue(&sem_compartido, &valor);
				printf("sem compartido %d\n", valor);*/
				/* Proceso Hijo: Se conecta al sector de memoria compartida */
				/*if((contador_compartido = shmat(shmid, 0, 0)) < (int *)0){
					perror("shmat");
					exit(EXIT_FAILURE);
				}*/

				/*if((contador_local = malloc(sizeof(int))) == NULL){
					perror("malloc");
					exit(EXIT_FAILURE);
				}*/

				/* Los procesos hijos van abriendo los archivos */
				if((fd = open(argv[k+2], O_RDONLY)) < 0){
					perror("open");
					exit(EXIT_FAILURE);
				}
				/* Leemos el archivo y comparamos cada caracter con el que
				 * se paso por la linea de comandos, en caso de que se encuentre
				 * uno se accede a la sección crítica utilizando el semáforo
				 * compartido y aumentamos el contador en 1 */	
				while(read(fd,&caracter_leido,1)){
					printf("caracter leido %c\n",(char)caracter_leido);

					if(strncmp(argv[1], &caracter_leido,1) == 0){
						/*
						if(sem_wait(&sem_compartido) == -1){
							perror("sem_wait");
							exit(EXIT_FAILURE);
						}
							
						*contador_compartido = *contador_compartido + 1;

						printf("contador compartido %d\n", *contador_compartido);
						if(sem_post(&sem_compartido) == -1){
							perror("sem_post");
							exit(EXIT_FAILURE);
						}*/
						//printf("antes de reservar\n");
						reservar(k);
						//printf("despues de reservar\n");

						*contador_compartido = *contador_compartido + 1;
						
						if((k+1) < cantidad_procesos_hijos){
							//printf("se libera k+1: %d\n", k+1);
							liberar(k+1);
						}else{
							//printf("no se libera k+1\n: %d", k+1);
							liberar(k);
						}
						//printf("aca llega despues de liberar\n");
					}
				}
				/* Cerramos el archivo */
				if(close(fd) < 0){
					perror("close");
					exit(EXIT_FAILURE);
				}		

				/* Hacemos que todos los procesos al llegar a este punto se de-attacheen de la memoria compartida */
				if(shmdt(contador_compartido) < 0){
					perror("shmdt");
					exit(EXIT_FAILURE);
				}
			}	
		}
	}

	/* El proceso padre espera a que finalicen los hijos y elimina el Semáforo y la Memoria Compartida*/
	if(pid != 0){
		//sem_post(&sem_compartido);		
		while(wait(&estado) > 0);
		printf("Se encontraron %d ocurrencias del caracter %s\n", *contador_compartido, argv[1]);
		printf("Eliminamos el semáforo y la memoria compartida\n");
		shmdt(memoria_compartida);
		if(shmctl(shmid, IPC_RMID, 0) < 0){
			perror("shmctl");
			exit(EXIT_FAILURE);
		}

		if(semctl(semid, 0, IPC_RMID) < 0){
			perror("sem_destroy");
			exit(EXIT_FAILURE);
		}/*
		if(sem_destroy(&sem_compartido)){
			perror("sem_destroy");
			exit(EXIT_FAILURE);
		}*/

		system("ipcs -ms");

	}
	exit(EXIT_SUCCESS);
}
