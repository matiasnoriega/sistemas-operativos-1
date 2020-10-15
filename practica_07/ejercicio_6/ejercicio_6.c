#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
	/* Variable pid para usar con fork() */
	pid_t pid;	
	/* Array de 2 posiciones que funcionará como descriptor de archivo para usar con pipe() */
	int fd[2];
	/* Otro descriptor de archivo que usaremos más adelante para guardar la salida de wc*/
	int wc_fd;
	
	/* Creamos el pipe */
	if(pipe(fd) < 0){
		perror("error en pipe()");
		exit(EXIT_FAILURE);	
	}
	
	/* Creamos el primer proceso hijo */
	if((pid = fork()) < 0){
		perror("error en fork");
		exit(EXIT_FAILURE);
	}
	
	/* Creamos el segundo proceso hijo */
	if(pid != 0){		
		if((pid = fork()) < 0){
			perror("error en fork");
			exit(EXIT_FAILURE);
		}
		
		/* El segundo hijo ejecuta la orden grep */
		if(pid == 0){
			/*
			 * dup2 crea una copia del descriptor de archivo (de la posicion de escritura)
			 * usado por pipe() en la salida estandar del sistema (STDOUT_FILENO).
			 * Quiere decir que la salida estandar es el nuevo 'canal' de escritura
			 * donde va a ir a parar el resultado de la ejecución de grep. Esto
			 * nos resulta útil para poder envíar al "mismo canal" la salida de 
			 * ambos procesos hijos (proceso hijo 1 y 2).
			 */
			dup2(fd[1], STDOUT_FILENO);
			close(fd[0]);
			/* Le pasamos a grep la palabra a buscar y el archivo donde hacerlo */
			execlp("grep","grep",argv[1],argv[2],NULL);
			close(fd[1]);
		}

	}else{
		/* Al no haber entrado en el condicional anterior, quiere decir
		 * que se trata del primer proceso hijo. Sucede lo mismo que en
		 * el llamado a dup2() del otro hijo.
		 */
		
		dup2(fd[1], STDOUT_FILENO);
		close(fd[0]);
		/* Idem grep anterior */
		execlp("grep","grep",argv[1],argv[3],NULL);
		close(fd[1]);

	}
	/* Creamos el tercer proceso hijo */
	if(pid != 0){		
		if((pid = fork()) < 0){
			perror("error en fork");
			exit(EXIT_FAILURE);
		}
		/* El tercer hijo ejecuta la orden wc */
		if(pid == 0){
			/* En este punto cerramos el canal de escritura del fd usado por el pipe 
			 * y con dup2 le decimos al proceso hijo que la lectura no la va a hacer
			 * del descriptor de lectura del pipe (fd[0]) sino de la entrada estandar
			 * del sistema.*/
			dup2(fd[0], STDIN_FILENO);
			close(fd[1]);
			
			/*
			 * Abrimos un archivo con la función open(). Para hacerlo le pasamos el nombre
			 * del archivo que pasamos como argumento en la línea de comandos para que
			 * sea el archivo de destino del resultado final. Este archivo lo creamos con
			 * las flags O_WRONLY (para abrirlo en solo escritura) y O_CREAT, para que 
			 * cree el archivo en el caso de que no exista. Luego pasamos opciones para
			 * determinar los permisos del archivo en el caso de que este haya sido creado
			 * por open(). En este caso S_IRUSR marca permiso de lectura para el usuario
			 * mientras que S_IWUSR marca permisos de escritura. Lo mismo para S_IRGRP y
			 * S_IWGRP pero para el grupo. En este caso dejamos sin permisos a 'otros'.
			 * En la línea comentada se puede ver como se agregan permisos 777.
			 */
			wc_fd = open(argv[4], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
			//wc_fd = open(argv[4], O_WRONLY | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO);
			
			/*
			 * Usamos nuevamente dup2 para marcar la salida estandar (la que va a producir
			 * la ejecución de wc) se dirija al archivo que marca el descriptor de archivo
			 * creado por open(). Y luego cerramos el descriptor en cuestión ya que no se
			 * va a usar más (de la misma manera que se cierran los de pipe()).
			 */
			dup2(wc_fd, STDOUT_FILENO);
			close(wc_fd);

			/*
			 * Una vez que se ejecute wc en lugar de ir a la salida estandar su resultado
			 * será guardado en el archivo deseado.
			 */
			execlp("wc","wc","-l",NULL);
			close(fd[0]);
		}
	}

	exit(EXIT_SUCCESS);

}
