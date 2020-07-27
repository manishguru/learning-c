#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	fp= fopen("manish.txt","r");
	while(!feof(fp)){
		putchar(fgetc(fp));
	}
	rewind(fp);
	printf("\n");
		while(!feof(fp)){
		putchar(fgetc(fp));
	}
	return 0;
}
