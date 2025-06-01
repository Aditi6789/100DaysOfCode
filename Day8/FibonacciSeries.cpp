#include<iostream>
using namespace std;

void printFibonacciSeries(int num){
    int firstNumber = 0;
    int secondNumber = 1;
    int nextNumber;
    cout<<" "<<firstNumber<<" "<<secondNumber<<" ";

    for(int i=3; i<= num; i++){
        nextNumber = firstNumber + secondNumber;
        cout<<nextNumber<<" ";
        firstNumber = secondNumber;
        secondNumber = nextNumber;
    }
}
int main(){
    int num;
    cout<<"Enter the number of terms: ";
    cin>>num;
    printFibonacciSeries(num);
    return 0;
}



