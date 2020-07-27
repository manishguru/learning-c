#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("enter number of day\n");
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("the day is sunday\n");
			break;
		case 2:
			printf("the day is monday\n");
			break;
		case 3:
			printf("the day is tuesday\n");
			break;
		case 4:
			printf("the day is wednesday\n");
			break;
		case 5:
			printf("the day is thrusday\n");	
			break;
		case 6:
			printf("the day is friday\n");
			break;				
		case 7:
			printf("the day is saturday\n");
			break;
		default:
		printf("invalid option given");			
	}
	return 0 ;
}
