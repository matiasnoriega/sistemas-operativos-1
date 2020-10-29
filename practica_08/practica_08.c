#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <time.h>
#include <sys/types.h>
#include <sys/sem.h>

/* cat archivo | grep -o letra | wc -l */


int main(int argc, char *argv[]){
	
	pid_t pid;
	int estado;
	
	for(int k = 2; k < argc; k++){
		printf("%s\n", argv[k]);
	}
	/*
	if(pid != 0){
		while(wait(&estado) < 0);
	}*/
	return 0;
}
