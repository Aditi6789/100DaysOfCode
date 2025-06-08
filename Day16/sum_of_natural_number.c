#include<stdio.h>

//Recursion method to find sum of first n natural numbers.
int getSum(int num){
    if(num ==1){
        return 1; // Base case
    }
    return num + getSum(num-1);  // Recursion step
}
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    // Call the function and display result

    printf("Sum of first %d natural number: %d",n,getSum(n));
    return 0;
}

