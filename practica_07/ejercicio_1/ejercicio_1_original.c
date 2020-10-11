#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	
	fork();
	printf("Uno\n");
	fork();
	printf("Dos\n");
	fork();
	printf("Tres\n");

	return 0;
}
