#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	char d[100]="hello manish";
	FILE *fp;
	fp= fopen("manish.txt","w");
	if (fp!= NULL){
		fprintf(fp,"%s",d);
		a= ferror(fp);
		printf("%d\n",a);
		if (a==0){
			printf("there are no errors\n");
		}else{
			printf("there is an error\n");
		}
	}else{
		printf("unable to open the file\n");
	}
	return 0;
}
