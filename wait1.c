#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

void main(){
	int status;
	pid_t pid;
	pid =fork();
	if(pid<0){
		printf("error");
		exit(-1);
	}
	else if(pid==0){
		printf("child process here\n");
		printf("process id is : %d\n",getpid());
		int a;
		int b;
		printf("enter two numbers\n");
		scanf("%d%d",&a,&b);
		if(a>b){
			printf("a is greater\n");
		}
		else{
			printf("b is greater\n");
		}
		sleep(10);
	}
	else{
		wait(&status);
		printf("parent process here\n");
		printf("process id :%d\n",getpid());
		int n;
		printf("enter an number to find odd or even\n ");
		scanf("%d",&n);
		if(n%2==0){
			printf("even number\n");
		}
		else{
			printf("odd number\n");
		}
		sleep(25);
	}
}
