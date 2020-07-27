#include<stdio.h>
#include<conio.h>
#include<string.h>
union data {
	char string[10];
	int x;
};
void display(union data *d){
	printf("%s",d->string);
}
int main(){
	union data var;
	strcpy(var.string,"i am manish");
	display(&var);
	getch();
	return 0;
}
