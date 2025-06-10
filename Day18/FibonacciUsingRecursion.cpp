#include<iostream>
using namespace std;

// Recursion method to calculate Fibonacci numbers 
int getfibonacci(int num){
    if(num <= 1){
        return num; //Base cases: Fibonacci(0) = 0,Fibonacci(1) = 1
    }
    return getfibonacci(num-1) + getfibonacci(num-2);
}
int main(){
    //Let's start
    int num;
    cout<<"Enter the Number of term in Fibonacci series:  ";
    cin>>num;

    // Number of term in the Fibonacci series
    cout<<"Fibonacci series up to "<<num<<" terms: ";
    
    for(int i = 0; i<num; i++){
        cout<<getfibonacci(i)<<" ";
    }
    return 0;
}

