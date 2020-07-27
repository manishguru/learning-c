#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int *marks,length,counter;
	puts("enter the length");
	scanf("%d",&length);
	marks=(int *) calloc(length,sizeof(int));
	if(marks==NULL){
		printf("unable to allocate memory");
	}else{
		for(counter=0;counter<length;counter++){
			printf("enter the marks of %d subject",counter+1);
			scanf("%d",&marks[counter]);
			
		}
		for(counter=0;counter<length;counter++){
			printf("%d\n",marks[counter]);
		}
		free(marks);
	}
	return 0;
}
