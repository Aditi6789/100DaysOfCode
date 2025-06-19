#include<iostream>
using namespace std;

int gameNumber = 25;        //Fixed number to guess
int attempts=0;

void guessNumber(){

    int userNumber;
    cout<<"Guess a number between 1 to 100 :";     //Ask the user for their guess
    cin>>userNumber;
    attempts++;

    //Check the guess number
    if( userNumber == gameNumber){
        cout<<"Congradulation! You guessed the number."<<endl;
    }
    else if(userNumber > gameNumber){
        cout<<"Too high! Try again."<<endl;
        guessNumber();
    }else{
        cout<<"Too low! Try again."<<endl;
        guessNumber();
    }
}
int main(){
    guessNumber();
    return 0;
} 