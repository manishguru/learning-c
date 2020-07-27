#include<stdio.h>
#include<conio.h>
struct student{
	char name[100];
	int class;
	int age;
};
int main(){
	struct student manish={
		"manish guruwacharya",
		11,
		16
	};
		struct student swornim={
		"swornim sen shrestha",
		11,
		16
	};
	printf("the name, class, age of student is %s,%d,%d\n",manish.name,manish.class,manish.age);
	printf("the name, class, age of student is %s,%d,%d\n",swornim.name,swornim.class,swornim.age);
}

