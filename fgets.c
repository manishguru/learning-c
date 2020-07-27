#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char ch[10];
	fp=fopen("manish.txt","r");
	if(fp==NULL){
		printf("unable to open the file");
	}else{
	while(!feof(fp)){
		fgets(ch,10,fp);
		printf("the chareters readed were %s\n",ch);
	}
	fclose(fp);
}
	return 0;
}
