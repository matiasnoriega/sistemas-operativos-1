#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define MAX 6

int semid;

void escribirA (void){
	int num;
	for(num=0 ; num < MAX ; num++){
		printf("A"); fflush(stdout); sleep(random() %3);
	}
}

void escribirB (void){
	int num;
	for(num=0 ; num < MAX ; num++){
		printf("B"); fflush(stdout); sleep(random() %2);
	}
}

void escribirC (void){
	int num;
	for(num=0 ; num < MAX ; num++){
		printf("C"); fflush(stdout); sleep(random() %2);
	}
}

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

int main(int argc, int *argv[]){
	
	int cant_proc_hijos = 3;
	int k;
	pid_t hijos[cant_proc_hijos];
	
	for(k = 0; k < cant_proc_hijos; k++){
		
		if((hijos[k] = fork()) < 0){
			perror("fork hijo1");
			exit(EXIT_FAILURE);
		}
		if(hijos[k] == 0){
			break;
		}	
	}

	switch(k){
		case 0:
			escribirC();
			break;
		case 1:
			escribirB();
			break;
		case 2:
			escribirC();
			break;
	}
	
}
