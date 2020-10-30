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

/* Creo las funciones para reservar y liberar el semáforo system V*/
void reservar(int semid, int semaforo){
	struct sembuf buf;
	buf.sem_num = semaforo;
	buf.sem_op = -1;
	buf.sem_flg = 0;

	semop(semid, &buf, 1);
}

void liberar(int semid, int semaforo){
	struct sembuf buf;
	buf.sem_num = semaforo;
	buf.sem_op = 1;
	buf.sem_flg = 0;

	semop(semid, &buf, 1);
}

int main(int argc, char *argv[]){
	
	pid_t pid = getpid();
	char caracter_leido;
	void *memoria_compartida = (void *)0;
	/* La cantidad de procesos hijos la calculamos teniendo en cuenta la cantidad de archivos a leer (la cantidad de argumentos menos los 2 iniciales) */
	int estado, shmid, semid, *contador_compartido, cantidad_procesos_hijos = argc -2;
	
	printf("Creamos la matríz de semáforos y el espacio de memoria compartida...\n\n");	
	/* Obtenemos una matriz de semáforos como tantos forks vayamos a crear */
	if((semid = semget(IPC_PRIVATE, cantidad_procesos_hijos, 0600)) < 0){
		perror("semget");
		exit(EXIT_FAILURE);
	}

	/* Inicializamos los semaforos, el primero en 1 y el resto en 0 */
	semctl(semid, 0, SETVAL, 1);
	for(int i = 1; i < cantidad_procesos_hijos; i++){
		semctl(semid, i, SETVAL, 0);
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
						reservar(semid, k);
						*contador_compartido += 1;
						
						/* Una vez realizada la escritura del entero en el espacio de memoria compartida
						 * chequeamos si la proxima posicion de K excede el número de procesos hijos (o archivos abiertos)
						 * y en el caso de que sea el último archivo, liberará el primer semáforo del conjunto */
						if((k+1) < cantidad_procesos_hijos){
							liberar(semid, k+1);
						}else{
							liberar(semid, 0);
						}
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
		if(shmctl(shmid, IPC_RMID, 0) < 0){
			perror("shmctl");
			exit(EXIT_FAILURE);
		}

		if(semctl(semid, 0, IPC_RMID) < 0){
			perror("sem_destroy");
			exit(EXIT_FAILURE);
		}

		system("ipcs -ms");

	}
	exit(EXIT_SUCCESS);
}
