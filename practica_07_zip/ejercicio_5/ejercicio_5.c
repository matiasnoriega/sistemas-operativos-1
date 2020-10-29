#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
	
int contador_usr1 = 0;
int contador_usr2 = 0;
	
void handler_usr(int signal){
	
	switch(signal){

		case SIGUSR1:
			contador_usr1++;
			printf("Señal %d(USR1) recibida. Contador: %d\n", signal, contador_usr1);
			break;
		case SIGUSR2:
			contador_usr2++;
			printf("Señal %d(USR2) recibida. Contador: %d\n", signal, contador_usr2);
			break;
		case SIGTERM:
			printf("Se recibieron %d Señales USR1 y %d Señales USR2\n", contador_usr1, contador_usr2);
			printf("Se procede a finalizar el programa.\n");
			exit(EXIT_SUCCESS);
		default:
			printf("Se recibieron %d Señales USR1 y %d Señales USR2\n", contador_usr1, contador_usr2);
			printf("Se procede a finalizar el programa.\n");
			exit(EXIT_SUCCESS);

	}
}

int main(){
	

	if(signal(SIGUSR1, handler_usr) == SIG_ERR || signal(SIGUSR2, handler_usr) == SIG_ERR || signal(SIGTERM, handler_usr) == SIG_ERR){
		perror("Error instalando el handler");
		exit(EXIT_FAILURE);	
	}

	printf("Proceso %d esperando señales... \n\n", getpid());

	while(1){
		sleep(55);
	}
	exit(EXIT_SUCCESS);
}
