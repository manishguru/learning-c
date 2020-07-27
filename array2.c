#include<stdio.h>
#include<conio.h>
int main(){
	int i,a[10];
for(i=0;i<10;i++){
	printf("enter the marks of a[%d]\n",i );
	scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
	printf("the value of a[%d] is %d \n",i,a[i]);
}
	return 0 ;
}
