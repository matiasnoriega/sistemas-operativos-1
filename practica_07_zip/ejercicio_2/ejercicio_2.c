#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int c;
	pid_t pid;
	
	printf("Comienzo.:\n");
	
	for (c = 0; c < 4 ; c++ )
	{
		pid = fork();
	}
	
	printf("Proceso\n");
	
	return 0;
}

