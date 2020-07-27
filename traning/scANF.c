#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int a;
	int b;
	int r=1;
	printf("Enter any multidigit number.\n");
	scanf("%d",&a);
	while(a>0){
		b=a%10;
		r=r*b;
		a=a/10;
	}
	printf("The result by multiplying the digits is %d",r);
	getch();
	return 0;
}
