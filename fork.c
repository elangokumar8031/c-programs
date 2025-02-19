#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,cpid,count=0;
	cpid =  fork();
	if(cpid==0){
		count=100;
		for(i=0;i<3;i++){
			printf("the count is :%d",count++);
		}
	}
	else{
		for(i=0;i<3;i++){
			printf("the count is:%d",count++);
		}
	}
	return 0;
}
