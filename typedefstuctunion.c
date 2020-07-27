#include<conio.h>
#include<string.h>
#include<stdio.h>
int main (){
	typedef struct{
		int age;
		char name[100];
	}manish;
	manish var;
	var.age= 15;
	strcpy(var.name,"manish");
	printf("%d\t%s",var.age,var.name);
	return 0;
}
