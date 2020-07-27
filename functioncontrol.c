#include<stdio.h>
#include<conio.h>
void function1();
void function2();
int main(){
	printf("in main function\n");
	printf("calling function 1\n");
	function1();
	printf("in main function after returning from function1\n");
	printf("returning from main function\n");
}
void function1(){
	printf("in function1\n");
	printf("calling function 2\n");
	function2();
	printf("in function one after retruning form function 2\n");
	printf("returning from function 1\n");
}
void function2(){
	printf("in function2\n");
	printf("retruning from function 2\n");
}
