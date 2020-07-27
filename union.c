#include<stdio.h>
#include<conio.h>
int main(){
	union mam{
		int x;
		char y;
	};
	union mam var;
	var.x=44;
	var.y='a';
	printf("%d\n",var.x);
	printf("%c",var.y);
	return 0;
}
