#include<stdio.h>
#include<conio.h>
int main(){
	int a = 0;
	int b=1;
	int c;
	int n;
	int i;
	printf("enter no of terms\n");
	scanf("%d",&n);
	for (i = 0;i<=n-1;i++){
	printf("%d\n",a);
	c=a+b;
	a=b;
	b=c;
}
	return 0 ;
}
