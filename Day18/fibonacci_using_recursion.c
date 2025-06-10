#include<stdio.h>

// Recursion method to calculate Fibonacci numbers 
int getfibonacci(int num){
    if(num <= 1){
        return num; //Base cases: Fibonacci(0) = 0,Fibonacci(1) = 1
    }
    return getfibonacci(num-1) + getfibonacci(num-2);
}
//Let's start
int main(){

    int num;
    printf("Enter the Number of term in Fibonacci series:  ");
    scanf("%d", &num);

    // Number of term in the Fibonacci series
    printf("Fibonacci series up to %d terms: ",num);
    for(int i = 0; i<num; i++){
        printf("%d ",getfibonacci(i));
    }
    return 0;
}
