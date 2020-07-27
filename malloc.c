#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int *p;
	p =(int *) malloc(sizeof(int));
	if (p == NULL){
	puts("failed to allocate memory");
	}else{
		*p=20;
		printf("%d",*p);
		free(p);
	}
	return 0;
}
