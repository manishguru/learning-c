#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("manish.txt","r");
	if(fp==NULL){
		printf("unable to open the file");
	}else{
	while(!feof(fp)){
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
}
	return 0;
}
