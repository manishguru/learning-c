#include<stdio.h>
#include<conio.h>
#include<string.h>
struct std{
	char name[100];
	int roll;
};
int main(){
	struct std manish;
	struct std *ptr;
	strcpy(manish.name,"manish");
	manish.roll = 123;
	ptr=&manish;
	printf("%s\t%d\n",manish.name,manish.roll);
	printf("%s\t%d",ptr->name,ptr->roll);
	
}
