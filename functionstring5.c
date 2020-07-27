#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char fn[50]="manish";
	char ln[50]=" guruwacharya";
	strupr(fn);
	printf("%s",fn);
	strlwr(ln);
	printf("%s",ln);
	return 0;
}

