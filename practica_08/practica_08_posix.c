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
#include <pthread.h>

sem_t sem;

int main(int argc, char *argv[]){
	
	pid_t pid = getpid();
	char caracter_leido;
	void *memoria_compartida = (void *)0;
	/* La cantidad de procesos hijos la calculamos teniendo en cuenta la cantidad de archivos a leer (la cantidad de argumentos menos los 2 iniciales) */
	int estado, shmid, *contador_compartido, cantidad_procesos_hijos = argc -2;
	
	printf("Creamos el semaforo sin nombre...\n\n");	
	/* Obtenemos un semaforo sin nombre */
	if(sem_init(&sem, 0, 1) < 0){
		perror("sem_init");
		exit(EXIT_FAILURE);
	}
	
	/* Creamos el segmento de memoria compartida del tamaño de un entero */	
	if((shmid = shmget(IPC_PRIVATE, sizeof(int), 0666)) < 0){
		perror("shmget");
		exit(EXIT_FAILURE);
	}
	
	/* Conectamos al espacio de memoria compartida y referenciamos ese espacio (casteandolo como puntero int)
	 * con el puntero contador_compartido declarado en el inicio. Una vez que el puntero apunta al espacio
	 * de memoria compartida, se llena ese espacio con un 0
	 */
	memoria_compartida = shmat(shmid, 0, 0);
	contador_compartido = (int *)memoria_compartida;
	*contador_compartido = 0;
	system("ipcs -sm");
	
	/* Iteramos por cada archivo que se haya pasado como argumento en la linea de comandos.
	 * La iteración empieza en k = 2 porque la posición 0 es el nombre del programa y la posición
	 * 1 es la letra a comparar
	*/
	for(int k = 0; k < cantidad_procesos_hijos; k++){
		/* Chequeamos al inicio de cada iteración que sea solamente
		 * el proceso padre el que cree los forks
		 */
		if(pid != 0){
			
			if((pid = fork()) < 0){
				perror("fork");
				exit(EXIT_FAILURE);
			}
				
			if(pid == 0){
				/* Los procesos hijos van abriendo los archivos correspondientes */
				int fd;

				if((fd = open(argv[k+2], O_RDONLY)) < 0){
					perror("open");
					exit(EXIT_FAILURE);
				}

				/* Leemos el archivo y comparamos cada caracter con el que
				 * se paso por la linea de comandos, en caso de que se encuentre
				 * uno se accede a la sección crítica utilizando el semáforo
				 * y aumentamos el contador en 1 */

				while(read(fd,&caracter_leido,1)){
					printf("El caracter leido en archivo %s, por fork %d es: %c\n", argv[k+2],k,(char)caracter_leido);
							
					if(strncmp(argv[1], &caracter_leido,1) == 0){
						sem_wait(&sem);
						*contador_compartido += 1;
						
						sem_post(&sem);
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
		
		while(wait(&estado) > 0);
		printf("|-------------------------------------------------|\n");
		printf("  Se encontraron %d ocurrencias del caracter '%s' \n", *contador_compartido, argv[1]);
		printf("|-------------------------------------------------|\n");
		printf("\nEliminamos el semáforo y la memoria compartida...\n");
		shmdt(memoria_compartida);
		if(shmctl(shmid, 0, IPC_RMID) < 0){
			perror("shmctl");
			exit(EXIT_FAILURE);
		}

		if(sem_destroy(&sem)< 0){
			perror("sem_destroy");
			exit(EXIT_FAILURE);
		}

		system("ipcs -ms");

	}
	exit(EXIT_SUCCESS);
}
