#include<stdio.h>

int gameNumber = 25;        //Fixed number to guess
int attempts=0;

int main(){
    guessNumber();
    return 0;
}  
void guessNumber(){

    int userNumber;
    printf("Guess a number between 1 to 100 :");   //Ask the user for their guess
    scanf("%d",&userNumber);
    attempts++;

    //Check the guess number
    if( userNumber == gameNumber){
        printf("Congradulation! You guessed the number.\n");
    }
    else if(userNumber > gameNumber){
        printf("Too high! Try again.\n");
        guessNumber();
    }else{
        printf("Too low! Try again.\n");
        guessNumber();
    }
}

