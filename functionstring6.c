#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char man[100]="manish guruwacharya";
	char ish[100];
	strcpy(ish,man);
	printf("%s\n",man);
	printf("%s\n",ish);
	return 0;
}
