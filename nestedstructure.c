#include<stdio.h>
#include<conio.h>
struct add{
	char pn[100];
	char tn[100];
};
struct student{
	char name[100];
	int class;
	int age;
	struct add addr;
	
};
int main(){
	struct student manish={
		"manish guruwacharya",
		11,
		16,
		"baniyatar,gongabu"
		" nuwakot,nepal"
		
		
	};
	printf("the name, class, age of student,permanent address and temporary address is %s,%d,%d and %s,%s\n",manish.name,manish.class,manish.age,manish.addr.pn);

}

