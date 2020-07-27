#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	FILE *fp;
	char data[]="my name is manish";
	int lg=strlen(data);
	int counter= -1;
	fp = tmpfile();
	if(fp !=NULL){
		puts("file hasbeen created");
		while(++counter<lg){
			fputc(data[counter],fp);
		}
		rewind(fp);
		while(++counter<lg){
			putchar(fgetc(fp));
		}
	
	}else{
		puts("unable to create file");
	}
	return 0;
}
