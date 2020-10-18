#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <signal.h>

#define BUF_SIZE 512
/* Declaramos el entero identificador de la memoria compartida */
int shmid;

/* Manejador de señales para proceso hijo */
void sig_handler(int signal);

int main(){
	
	/* variable global descriptor de archivo para memoria compartida */
	char *shmfd; 
	/* Variable global auto explicativa*/
	char mensaje[]= "\n---------------------------\nMensaje Compartido en Memoria Compartida\n---------------------------\n";
	
	pid_t pid; /* Variable para usar con fork() */	

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

		/* Ponemos al proceso padre a dormir por un segundo, asegurandonos
		 * que la ejecución del proceso hijo llegue a la instrucción signal
		 * y así pueda manejar la señal que vamos a enviar */
		sleep(1);	
		/* Envíamos la señal USR1 al proceso hijo */
		kill(pid, SIGUSR1);
		printf("Padre terminado\n");

	}else{
		
		/* Asignamos un manejador de señal para la señal SIGUSR1 
		 * y dejamos al proceso hijo en pausa hasta que llegue la señal del padre
		 */
		signal(SIGUSR1, sig_handler);
		pause();
		/* Una vez que se ejecute el manejador de señal el proceso hijo se desconecta
		 * del segmento de memoria compartida y lo elimina para liberar el espacio en memoria */		
		printf("Se elimina el segmento de memoria compartida %d\n", shmid);
		if((shmdt(shmfd)) < 0){
			perror("shmdt");
			exit(EXIT_FAILURE);
		}	
		if(shmctl(shmid, IPC_RMID, 0) < 0){
			perror("error borrando la memoria compartida");
			exit(EXIT_FAILURE);
		}
		system("ipcs -m");
	}

	exit(EXIT_SUCCESS);

}

void sig_handler(int signal){	
	/* Escribimos en la salida estandar el contenido de la memoria compartida */
	char *shmfd1;
	if((shmfd1 = shmat(shmid, 0, 0)) < (char *)0){
		perror("shmat");
		exit(EXIT_FAILURE);
	}
	write(STDOUT_FILENO, shmfd1, BUF_SIZE);
}
