#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char name[20];
	int ag;
	fp=fopen("manish.txt","a");
	printf("enter your age and name\n");
	scanf("%d\n",&ag);
	gets(name);
	fprintf(fp,"%s\t%d\n",name,ag);
	fclose(fp);
	return 0;
}
