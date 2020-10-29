#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <unistd.h>
#include <signal.h>

#define BUF_SIZE 512
/* Declaramos el entero identificador de la memoria compartida */
int shmid;

int main(){
	
	/* variable global descriptor de archivo para memoria compartida */
	char *shmfd; 
	/* Variable global auto explicativa*/
	char mensaje[]= "\n---------------------------\nMensaje Compartido en Memoria Compartida\n---------------------------\n";
	
	pid_t pid; /* Variable para usar con fork() */	
	
	/* Declaramos variables necesarias para el semaforo */
	int identificador_semaforo;
	int cantidad_semaforos = 1;
	int indicadores_semaforos = 0666;

	/* Creamos el conjunto de semáforos y guardamos su id en la variable identificador_semaforo */
	if((identificador_semaforo = semget(IPC_PRIVATE, cantidad_semaforos, indicadores_semaforos)) < 0){
		perror("semaforo");
		exit(EXIT_FAILURE);
	}

	printf("Se creó el semaforo: %d\n",identificador_semaforo);
	system("ipcs -s");

	/* Seteamos el primer semáforo del recién creado conjunto de semáforos en 0 */
	if(semctl(identificador_semaforo, 0, SETVAL, 0) < 0){
		perror("semctl");
		exit(EXIT_FAILURE);
	}

	/* Creamos un segmento de memoria compartida del tamaño del segmento definido mas arriba
	 * con permisos de lectoescritura solo para el propietario y el grupo
	 */	
	if((shmid = shmget(IPC_PRIVATE, sizeof(mensaje)+1, 0660)) < 0){
			perror("shmget error");
			exit(EXIT_FAILURE);		
	}

	printf("Se creó el segmento de memoria compartida %d\n", shmid);
	system("ipcs -m");

	/* Conectamos al segmento de memoria compartida asociado al shmid que nos devolvio
	 * la operacion anterior para poder operar sobre ella. shmat nos devolverá en caso
	 * de éxito el descriptor de archivo */
	if((shmfd = shmat(shmid,0, 0)) < (char *)0){
		perror("error shmat");
		exit(EXIT_FAILURE);
	}
		
	/* Creamos proceso hijo */
	if((pid = fork()) < 0){
		perror("error en fork");
		exit(EXIT_FAILURE);
	}
		
	if(pid != 0){

		/* En el proceso padre, escribimos el mensaje en la memoria */
		for(int k = 0; k < sizeof(mensaje); k++){
			shmfd[k] = mensaje[k];
		}

		/* Y desconectamos al proceso del espacio de memoria compartido */
		if((shmdt(shmfd)) < 0){
			perror("shmdt");
			exit(EXIT_FAILURE);
		}

		/* Ponemos el semáforo en 1 para que el proceso hijo pueda ejecutar el mensaje */
		if(semctl(identificador_semaforo, 0, SETVAL, 1) < 0){
			perror("semctl");
			exit(EXIT_FAILURE);
		}

		printf("Padre terminado\n");

	}else{
		
		/* Dejamos al proceso hijo en espera a que el semáforo habilite la lectura */
		while(semctl(identificador_semaforo, 0, GETVAL) == 0);
		/* Escribimos en la salida estandar el contenido de la memoria compartida */
		char *shmfd1;
		if((shmfd1 = shmat(shmid, 0, 0)) < (char *)0){
			perror("shmat");
			exit(EXIT_FAILURE);
		}
		write(STDOUT_FILENO, shmfd1, BUF_SIZE);
		/* Una vez que se ejecute el manejador de señal el proceso hijo se desconecta
		 * del segmento de memoria compartida y lo elimina para liberar el espacio en memoria.
		 * De la misma manera vamos a eliminar el semaforo que ya no vamos a usar más */		
		printf("Se elimina el segmento de memoria compartida %d y el conjunto de semáforos %d\n", shmid, identificador_semaforo);
		if((shmdt(shmfd)) < 0){
			perror("shmdt");
			exit(EXIT_FAILURE);
		}	
		if(shmctl(shmid, IPC_RMID, 0) < 0){
			perror("error borrando la memoria compartida");
			exit(EXIT_FAILURE);
		}
		if(semctl(identificador_semaforo, 0, IPC_RMID) < 0){
			perror("semctl::IPC_RMID");
			exit(EXIT_FAILURE);
		}
		system("ipcs");
	}

	exit(EXIT_SUCCESS);

}

