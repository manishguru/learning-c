#include<stdio.h>
#include<conio.h>
int main(){
	int x=10;
	int *j;
	int **p;
	j = &x;
	p= &j;
	printf("The value of x is %d\n",x);
	printf("The address value of x is %u\n",&x);
	printf("The value of x is %u\n\n",*(&x));
	printf("the memory address stored in j is %u\n",j);
	printf("the value pointed by pointer j is %u\n",*j);
	printf("The address of pointer j is %u\n\n",&j);
	printf("The memory address stored in p is %u\n",p);
	printf("The value pointer by pointer p is %u\n",*p);
	printf("The address of pointer p is %u",&p);
	return 0;
}
