#include<stdio.h>
#include<conio.h>
struct student{
	char name;
	int roll;
};
int main(){
	int size= 3;
	struct student s[size];
	int counter;
	for(counter=0; counter<size;counter++){
		printf("enter name and roll of student %d\n",counter+1);
		scanf("%s%d",&s[counter].name,&s[counter].roll);
	}
	
	for(counter=0;counter<size;counter++){
		printf("name %s\troll %d",s[counter].name,s[counter].roll);
	}
	return 0;
}
