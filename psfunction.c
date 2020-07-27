#include<stdio.h>
#include<conio.h>
#include<string.h>
struct std{
	char name[100];
	int roll;
};
void display(char[],int);
void show(struct std);
int main(){
	struct std manish;
	strcpy(manish.name,"manish");
	manish.roll=123;
	display(manish.name,manish.roll);
	show(manish)	;
	
}
void display(char n[],int r){
	printf("In display function\n");
	printf("%s\t%d\n",n,r);
}
void show(struct std m){
	printf("\nIn show function\n");
	printf("%s\t%d\n",m.name,m.roll);
}
