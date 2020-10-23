#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

#define MAX 6

int semid;

/* Definimos una función para 'reservar' de alguna manera
 * lo que será la sección crítica de cada proceso. Para ello pasamos 
 * como argumento el identificador del conjunto de semaforos que queremos 
 * modificar y el semaforo en particular de ese conjunto. La operación que en 
 * este caso será decrementar el semaforo en 1. No se pasa ninguna 
 * flag pero se declara por la estructura de sembuf. */
void reservar(int semaforo){
	
	struct sembuf buf;
	buf.sem_num = semaforo;
	buf.sem_op = -1;
	buf.sem_flg = 0;
	/* Pasamos a semop el id del conjunto de semaforos, la estructura 
	 * buf que contiene la operación a realizar y 1 que es la cantidad
	 * de veces que queremos que se realice la operación */	
	semop(semid, &buf, 1);
}

/* Lo mismo que en el caso anterior, solamente que la funcion liberará 
 * la sección crítica, incrementando el semaforo en 1*/

void liberar(int semaforo){
	struct sembuf buf;
	buf.sem_num = semaforo;
	buf.sem_op = 1;
	buf.sem_flg = 0;

	semop(semid, &buf, 1);
}

void escribirA (void){
	int num;
	for(num=0 ; num < MAX ; num++){
		reservar(0);
		printf("A"); fflush(stdout); sleep(random() %3);
		liberar(1);
	}
}

void escribirB (void){
	int num;
	for(num=0 ; num < MAX ; num++){
		reservar(1);
		printf("B"); fflush(stdout); sleep(random() %2);
		liberar(2);
	}
}

void escribirC (void){
	int num;
	for(num=0 ; num < MAX ; num++){
		reservar(2);
		printf("C"); fflush(stdout); sleep(random() %2);
		liberar(0);
	}
}

int main(int argc, char *argv[]){
	
	int cant_proc_hijos = 3;
	int k; /* Contador para la identificación de cada proeso hijo */
	pid_t hijos[cant_proc_hijos];
	pid_t ppid = getpid();
	int estado;
	
	/* Declaramos variables necesarias para el semaforo */
    int cantidad_semaforos = 3;
    int indicadores_semaforos = 0600;

    /* Creamos el conjunto de semáforos y guardamos su id en la variable identificador_semaforo */
    if((semid = semget(IPC_PRIVATE, cantidad_semaforos, indicadores_semaforos)) < 0){
        perror("semaforo");
        exit(EXIT_FAILURE);
    }   

	
	printf("\n\nSe crea el semáforo: %d\n", semid);
	system("ipcs -s");

	/* Se inicializan los semaforos */
	semctl(semid, 0, SETVAL, 1);
	semctl(semid, 1, SETVAL, 0);
	semctl(semid, 2, SETVAL, 0);

	for(k = 0; k < cant_proc_hijos; k++){
		/* Creamos procesos hijos */
		if((hijos[k] = fork()) < 0){
			perror("fork loop");
			exit(EXIT_FAILURE);
		}
		/* Cuando continúa la ejecución, chequeamos si 
		 * el proceso es un hijo, entonces le damos la 
		 * orden break para que salga de la iteración 
		 * for y continúe con la ejecución fuera del mismo */
		if(hijos[k] == 0){
			break;
		}	
	}
	
	/* Al llegar a este punto de la ejecución, los distintos 
	 * procesos tendrán distintos valores de k, ya que el primer
	 * proceso hijo saldrá del ciclo for cuando k vale 0, el segundo
	 * cuando k vale 1, y el tercero cuando k vale 3. */
	switch(k){
		case 0:
			escribirA();
			break;
		case 1:
			escribirB();
			break;
		case 2:
			escribirC();
			break;
		default: /* Agregamos este case default para cualquier proceso que no sea un hijo*/
			break;
	}
	
	/* Hacemos que el proceso padre espere la ejecución de todos
	 * los procesos hijos para eliminar el semáforo */
	if(ppid != getppid()){
		while(wait(&estado) > 0);

		printf("\n\nSe elimina el semáforo: %d\n", semid);
		if((semctl(semid, 0, IPC_RMID)) < 0){
			perror("semctl::IPC_RMID");
			exit(EXIT_FAILURE);
		}
		system("ipcs -s");
	}

	exit(EXIT_SUCCESS);
}
