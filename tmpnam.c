#include<stdio.h>
#include<conio.h>
int main(){
	char name[L_tmpnam+1];
	tmpnam(name);
	puts(name);
	return 0;
}
