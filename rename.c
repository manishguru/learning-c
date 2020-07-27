#include<stdio.h>
#include<conio.h>
int main(){
	if(rename("manish.txt","man.txt")==0){
		printf("sucessful");
	}else{
		printf("unsucessful");
	}
	return 0;
}
