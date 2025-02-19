#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>


void main(){
	pid_t pid;
	pid =fork();
	if(pid=0)
	{
		printf("child here");
		printf("process id :%d",getpid());
		sleep(30);
	}
	else
	{
		printf("parent here");
		printf("process id:%d",getpid());
		
	}
}
