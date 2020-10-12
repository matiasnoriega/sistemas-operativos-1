#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	/* Verificamos que se introduzca la cantidad mínima de argumentos */		
	if(argc < 3){
		perror("Falta un número");
		exit(EXIT_FAILURE);
	}
	
	/* Variable para usar con wait() */
	int estado;
	/* Variable para usar con fork() */
	pid_t pid;
	
	/* Creamos dos procesos hijos */
	if((pid = fork()) < 0){
		perror("error en fork()");
		exit(EXIT_FAILURE);
	}
	if(pid != 0){
		if((pid = fork()) < 0){
			perror("error en fork() 2");
			exit(EXIT_FAILURE);
		}
	}

	/*
	 * Hacemos que los hijos ejecuten el programa ejecutable de Fibonacci.
	 */
	if(pid == 0){
		printf("%d\n", execl("ejercicio_4_original","ejercicio_4_original",argv[1], NULL));	
	}else{
		wait(&estado);
		printf("Proceso Padre PID: %d Terminado\n", pid);
	}
	
	return 0;
}
