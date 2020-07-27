#include<stdio.h>
#include<conio.h>
int main(){
	int a=remove("man.txt");
	if (a==0){
		printf("sucessful");
	}else{
		printf("unsucessful");
	}
	return 0;
}
