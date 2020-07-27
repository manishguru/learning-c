#include<stdio.h>
#include<conio.h>
int main(){
	FILE *tmp;
	tmp = tmpfile();
	if(tmp!=NULL){
		puts("file has been created");
	}else{
		puts("unable to create file");
	}
	return 0;
}
