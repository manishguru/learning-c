#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char ch[100];
	char m[100];
	fp=fopen("manish.txt","r");
	if(fp==NULL){
		printf("unable to open the file");
	}else{
		fscanf(fp,"%s %s",ch,m);
		printf("%s %s",ch,m);
	fclose(fp);
}
	return 0;
}
