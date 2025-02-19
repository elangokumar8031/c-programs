#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>


void main(){
	if (fork() && fork() )
		 fork();
	else
		printf("hello");
}
