//import necessary libraries
#import<stdlib.h>
#import<stdio.h>
#import<time.h>
#import<ctype.h>
//declare necessary variables
int comp_guess,usr_guess;
char ans;
//declare necessary functions
 int guess_check(int key, int guess){
	if (key >guess){
	return 0;
	}else if (key<guess){
		return 1;
	}else{
		return 2;
	}
}
//main game function
void game(){
	system ("cls");
	srand(time(0));
	//generate the answer
	comp_guess=rand()%100;
	
	
	do{
		printf("enter any number from 1 to 100\n");
	scanf("%d",&usr_guess);
	if(guess_check(comp_guess,usr_guess)==0){
		printf("enter a bigger number\n");
	}else if(guess_check(comp_guess,usr_guess)==1){
		printf("enter a smaller number\n");
	}else if(guess_check(comp_guess,usr_guess)==2){
		printf("you won!!!");
	}
}while(guess_check(comp_guess,usr_guess) != 2);
	
	printf("do you want to play game again(y/n)");
	scanf(" %c",&ans);
	ans = toupper(ans);
	//check the answer
	if (ans=='Y'){
		game();
	}
}
//loop until answer is correct

//ask user for input inside loop
	
//you win printing
	
//ask for replay
	
//main function
int main(){
	
//set random seed


//call game
	game();
	return 0;
}

