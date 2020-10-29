#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
	
	/* descriptor de archivo */
	int fd;
	/* pid para usar con fork() */
	pid_t pid;
	/* variable que declara el modo(permisos) con el que se va a abrir el fifo */
	mode_t mode = 0666;
	
	/* Creamos el fifo con el nombre "fifo" y el modo declarado mas arriba */
	if(mkfifo("fifo",mode) < 0){
		perror("error mkfifo");
		exit(EXIT_FAILURE);
	}

	/* Creamos un proceso hijo */
	if((pid = fork()) < 0){
		perror("error fork");
		exit(EXIT_FAILURE);
	}
	
	/* El proceso padre ejecuta la lectura del FIFO*/
	if(pid != 0){
		if((fd = open("fifo", O_RDONLY)) < 0){
			perror("error open");
			exit(EXIT_FAILURE);
		}
		/* Usamos dup2() para decirle al proceso padre que la entrada
		 * estandar se encontrará en el FIFO creado anteriormente*/
		dup2(fd,STDIN_FILENO);
		execlp("sort","sort","-r",NULL);
		close(fd);	
	}else{
		
		if((fd = open("fifo", O_WRONLY)) < 0){
			perror("error open");
			exit(EXIT_FAILURE);
		}
		/* De la misma manera que hicimos con el proceso padre para la
		 * entrada estandar, acá lo hacemos para el proceso hijo con la
		 * salida estandar, usando el FIFO*/
		dup2(fd,STDOUT_FILENO);
		execlp("ls","ls",NULL);
		close(fd);	
	}

	exit(EXIT_SUCCESS);

}
