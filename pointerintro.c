#include<stdio.h>
#include<conio.h>
int main(){
	int x=10;
	int *j;
	j = &x;
	printf("The value of x is %d\n",x);
	printf("The address value of x is %p\n",&x);
	printf("The value of x is %d\n\n",*(&x));
	printf("the memory address stored in j is %p\n",j);
	printf("the value pointed by pointer j is %d\n",*j);
	printf("The address of pointer j is %p\n",&j);
	return 0;
}
