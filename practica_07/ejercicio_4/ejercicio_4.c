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

	/* Variable para usar con las instrucciones fork() */
	pid_t pid;
		
	/* Creamos el primer proceso hijo */
	if((pid = fork()) < 0){	
		perror("error en fork()");
		exit(EXIT_FAILURE);
	}
	/* Si es el primer proceso hijo, lanzamos la ejecución del programa Fibonacci
	 * con el primer argumento, e lo contrario, hacemos que el proceso padre 
	 * lance el segundo proceso hijo y ejecute el programa Fibonacci con 
	 * el segundo argumento.
	 */
	if(pid == 0){
		execl("ejercicio_4_original","ejercicio_4_original",argv[1],NULL);
	}else{
		if((pid = fork()) < 0){	
			perror("error en fork()");
			exit(EXIT_FAILURE);
		}else{
			if(pid == 0){
				execl("ejercicio_4_original","ejercicio_4_original",argv[2],NULL);
			}
		}
	}
	
	/*
	 * Solucion alternativa a crear procesos hijos.

	int i = 2;
	while(i > 0){
		if((pid = fork()) < 0){
			perror("fallo");
			exit(EXIT_FAILURE);
		}
		if(pid == 0){
			execl("ejercicio_4_original","ejercicio_4_original",argv[i],NULL);
		}
		i--;
	}
	*/

	/*
	 * Verificamos que sea el proceso padre (pid != 0) y entramos en un loop while
	 * que ejecutará wait hasta que no quede ningún proceso hijo al cual esperar.
	 * wait() devolverá el pid del proceso hijo que terminó, y -1 en caso de que
	 * no haya mas procesos hijos que esperar.
	 */
	if(pid != 0){
		while( wait(&estado) > 0);
		printf("Proceso Padre PID: %d Terminado\n", pid);
	}
	
	return 0;
}
