#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int b=1;
	printf("enter any number\n");
	scanf("%d",a);
	do{
		b=b*a;
		a--;
	}while(a>0);
	printf("the result is %d",b);
}
