#include <stdio.h>
#include <conio.h>
int add(int,int);
int main(){
	int d=add(12,32);
	printf("the sum is %d",d);
	
	return 0;
}
int add(int a,int b){
	int s= a+b;
	return s;
}
