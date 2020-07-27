#import<conio.h>
#import<stdio.h>
#import<time.h>
#import<ctype.h>
int comp_guess,usr_guess,i,x;
int b=0;
char a,ans;
int guess_check(int comp,int usr){
	if(comp==0 && usr==0){
		return 5;
	}else if(comp==1 && usr==1){
		return 5;
	}else if(comp==2 && usr==2){
		return 5;
	}else if(comp==0 && usr==1){
		return 7;
	}else if(comp==1 && usr==2){
		return 7;
	}else if(comp==2 && usr==0){
		return 7;
	}else if(comp==1 && usr==0){
		return 6;
	}else if(comp==2 && usr==1){
		return 6;
	}else if(comp==0 && usr==2){
		return 6;
	}
}
void game(){
	system("cls");
	
	do{
		srand(time(0));
		comp_guess=rand()%3;
		printf("enter scissor, paper or rock(s/p/r)\n");
		scanf(" %c",&a);
		a = toupper(a);
		if(a=='S'){
			usr_guess=0;
		}else if(a=='P'){
			usr_guess=1;
		}else if (a=='R'){
			usr_guess=2;
		}
		if(guess_check(comp_guess,usr_guess)==5){
			printf("It is draw....\n");
		}else if(guess_check(comp_guess,usr_guess)==6){
			printf("you won\n");
			b=b+1;
		}else if(guess_check(comp_guess,usr_guess)==7){
			printf("you lost\n");
			x=i++;
			printf("you have %d life left\n",5-x);
		}
		}while(x!=5);
	printf("your total score is %d\n",b);
	printf("do you want to play again?(y/n)\n");
	scanf(" %c",&ans);
	ans=toupper(ans);
	if(ans=='Y'){
		game();
	}
}
int main(){
	
	game();
}
