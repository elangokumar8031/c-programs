#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
  



void main(){
	pid_t pid;
        pid = fork();
	if (pid<0){
		printf("error");
	}
	else if(pid==0){
		printf("\nchild here");
		printf("\nwho is here");
	}
	else{
		printf("\nparent here");
		printf("\nwho is here");
	}
}
