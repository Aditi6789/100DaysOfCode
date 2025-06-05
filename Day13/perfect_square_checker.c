#include<stdio.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int num){
    if(num <0 ){
        return 0; // Negative number can not be a perfect square
    }
    int i =0;
    while(i*i <= num){
        if(i*i == num){
            return 1;
        }
        i++;
    }
    return 0;
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    //Store the result in a variable and display it
    int ans = isPerfectSquare(num);
    if(ans){
        printf("%d is a perfect square.",num);
    }
    else{
        printf("%d is not a perfect square.",num);
    }
    return 0;
}
