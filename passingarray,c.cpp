#include <stdio.h>
#include <conio.h>
void display(int marks);
int main(){
	int marks[3]={90,40,70};
	display(marks[0]);
	display(marks[1]);
	display(marks[2]);
	return 0;
}
void display(int marks){
	printf("the marks obtained is %d\n",marks);
}
