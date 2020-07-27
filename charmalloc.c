#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *p;
	int length;
	puts("enter the length of charater");
	scanf("%d",&length);
	p=(char *)malloc(sizeof(char)*length+1);
	if (p==NULL){
		printf("memory is not allocated");
	}else{
		fflush(stdin);
		puts("enter the string");
		gets(p);
		puts(p);
		free(p);
	}
	return 0;
}
