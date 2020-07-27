#include<conio.h>
#include<stdio.h>
int main(){
	struct person{
		int age;
		char name[100];
		float height;
	};
	union student{
		int age;
		char name[100];
		float height;
	};
	printf("%d\n",sizeof(struct person));
	printf("%d\n",sizeof(union student));
	getch();
	return 0;
}
