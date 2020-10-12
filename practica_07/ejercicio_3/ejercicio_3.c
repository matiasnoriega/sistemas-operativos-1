#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    /*
	 * Declaro una variable del tipo pid_t para ser usada más
	 * adelante por los systemcalls. Inicialmente declarada
	 * en 1 para marcar que la primer ejecución en el loop
	 * while sea ejecutada por el proceso padre
	 */
    pid_t hijo = 1;
	
	/*
	 * La variable estado será referenciada por la instrucción
	 * wait() para almacenar la información del estado del 
	 * proceso hijo al que esté esperando.
	 * */
	int estado;

	/* 
	 * Creamos una variable del tipo entero para declarar 
	 * la cantidad de procesos hijos que deseamos generar.
	 * Básicamente controla la cantidad de iteraciones en
	 * el loop while, y nos servirá para la parte 'b' del 
	 * ejercicio en cuestión.
	 */
	int cantidad_hijos = 70;
	
	printf("Cantidad de Procesos Hijos: %d\nComienzo: \n\n", cantidad_hijos);
	/*
	 * El loop while itera tantas veces cómo procesos
	 * hijos querramos crear
	 */
	while(cantidad_hijos > 0){
		/*
		 * El primer IF verifica que efectivamente la
		 * ejecución de fork() sea llevada a cabo solo
		 * por el proceso padre. Es por eso también que
		 * se declaró con el valor '1' para que la
		 * iteración inicial sea ejecutada
		 */
		if(hijo != 0){

			/*
			 * Pisamos la variable hijo con el valor de retorno
			 * de fork(). Este condicional controla que el valor
			 * sea mayor que 0, en caso contrario arrojará un mensaje
			 * de error y terminará la ejecución del programa.
			 */
			if((hijo = fork()) < 0){
				perror("error en el fork()");
				exit(EXIT_FAILURE);
			}else{
				/*
				 * De no arrojar error, el proceso padre esperará a que el 
				 * hijo(1) finalice su ejecución para continuar.
				 */
				wait(&estado);
			}
		}
		cantidad_hijos--;
	}
	
	printf("PID: %d y PPID: %d\n", getpid(), getppid());
    return 0;
}
/*
 * (1): Utilizar el systemcall wait() sería lo mismo que utilizar 
 * waitpid(-1, &estado, 0). Donde -1 indica a waitpid() que espere 
 * la finalización de CUALQUIER proceso hijo, &estado indica la 
 * variable en la que el systemcall guardará el estado con el cual
 * terminó el proceso hijo y 0 indica que no se pasan opciones.
 */
