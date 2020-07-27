#import<stdlib.h>
#import<stdio.h>
#import<time.h>
#import<ctype.h>
int comp_guess, usr_guess;
char usr_input;
int guess_check(int key, int guess){
	if (key > guess){
		return 0;
	}else if (key < guess){
		return 1;
	}else {
		return 2;
	}
}
void game(){
	srand(time(0));
	comp_guess=rand()%100;
	system("cls");
	do{
		printf("enter any number between 1 to 100\n");
		scanf(" %d",&usr_guess);
		if (guess_check(comp_guess, usr_guess)==0){
			printf("enter bigger number\n");
		}else if (guess_check(comp_guess, usr_guess)==1){
			printf("enter smaller number\n");
		}else if (guess_check(comp_guess, usr_guess)==2){
			printf("you won!!!!!!!!!\n");
		}
	}while(guess_check(comp_guess, usr_guess) != 2);
	printf("do yo want to play once more?(y/n)\n");
	scanf(" %c",&usr_input);
	usr_input=toupper(usr_input);
	if (usr_input=='Y'){
		game();
	}
}
int main(){
	
	game();
}
