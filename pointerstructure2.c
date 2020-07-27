#include<stdio.h>
#include<conio.h>
struct student{
	char name[100];
	int roll;
};
int main(){
	struct student manish={
		"manish",
		1
	};
	display(&manish);
	return 0;
}
void display(struct student *ptr){
	printf("%s\t%d",ptr->name,ptr->roll);
}

