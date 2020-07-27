#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char input[100];
	fp=fopen("manish.txt","w");
	printf("enter the string that you wan to store\n");
	gets(input);
	fputs(input,fp);
	fclose(fp);
	return 0;
}
