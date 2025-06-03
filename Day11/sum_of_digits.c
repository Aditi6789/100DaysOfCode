#include<stdio.h>
int getSumOfDigit(int num){
    int sum=0;
    while(num !=0){
        sum += (num%10); // Get the last digit 
        num /= 10;      // Remove the last digit
    }
    return sum;
}
int main(){
    int num;
    //input the number
    printf("Enter the number : ");
    scanf("%d",&num);
    //call the function and display the result
    int totalSum = getSumOfDigit(num);
    printf("Sum of digits: %d",totalSum);
    return 0;
}