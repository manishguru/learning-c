#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char fn[50]="manish";
	char ln[50]="manish";
	int comp=strcmp(fn,ln);
	if (comp ==0){
		printf("The string are equal");
	}else{
		printf("the string are not equal");
	}
	return 0;
}

