#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	/* Guardo el valor de retorno del primer fork en 
	 * una variable para poder verificar en esta primera 
	 * evaluación si lo que se ejecuta en pantalla es 
	 * un proceso padre o un proceso hijo */
	pid_t pid = fork();
	
	/* Con un condicional verifico si es el padre
	 * o el hijo el que está siendo ejecutado. Para el
	 * proceso padre el valor guardado en la variable pid
	 * contendrá el PID del proceso hijo, mientas que para
	 * el proceso hijo el valor de pid será 0*/
	if(pid == 0){
		printf("Uno hijo\n");
	}else{
		printf("Uno\n");
	}
	if(pid == 0){
		printf("Dos hijo\n");
	}else{
	//fork();
	printf("Dos\n");
	}
	if(pid == 0){
		printf("Tres hijo\n");
	}else{
	//fork();
	printf("Tres\n");
	}
	return 0;
}
