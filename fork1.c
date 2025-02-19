#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
void main(){
	pid_t  pid;
	pid = fork();
	if(pid<0){
		printf("child is not created fork failed");
	}
	else if(pid==0){
		printf("\nchild here ");
		printf("\nproccess id :%d",getpid());
	}
	else{
		printf("\nparent here");
		printf("\nprocess id : %d",getpid());

	}
	return 0;
}
