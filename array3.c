#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,t,a[10];
for(i=0;i<10;i++){
	printf("enter the marks of a[%d]\n",i );
	scanf("%d",&a[i]);
}
for (i = 0;i<10;i++){
	for(j=0;j<10;j++){
		if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
}
for(i=0;i<10;i++){
	printf("the value of a[%d] is %d \n",i,a[i]);
}
	return 0 ;
}
