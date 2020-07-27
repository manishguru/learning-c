#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *str;
	str=(char *)malloc(13);
	if (str==NULL){
		printf("memory is not allocate");
	}else{
		strcpy(str,"manish guru");
		puts(str);
		str=(char *)realloc(str,19);
		strcat(str,"rocks");
		puts(str);
		free(str);
		}
	return 0;
}
