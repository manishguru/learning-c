#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char fn[50]="manish";
	char ln[50]="guruwacharya";
	int l=strlen(fn);
	printf("the length of first name is %d",l);
	strcat(fn,ln);
	printf("%s",fn);
	return 0;
}

