#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>


void main(){
	pid_t pid;
	int status;
	printf("process id :%d",getpid());
	pid = fork();
	if(pid<0){
		printf("eroro");
	}
	else if(pid==0){
		
		printf("\nchild process");
		printf("\nchild process id :%d",getpid());
		sleep(10);
		
	}
	else{
		wait(&status);
		printf("\nparent process");
		printf("\nparent process id  :%d",getpid());
		sleep(20);
	}
}
