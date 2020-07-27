#include<stdio.h>
#include<string.h>
#include<conio.h>
union data{
	char string[100];
	int x;
};
void display (union data d){
	printf("%s",d.string);
}
int main(){
	union data var;
	strcpy(var.string,"my name is manish");
	display(var);
	
	return 0;
}
