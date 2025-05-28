// Program to check number is even or odd number..

#include<stdio.h>

void checkOddEven(int num){

        // All even number is divisible by 2 

        if(num % 2 == 0){    
            printf("%d is a even number.\n",num);
        }
        else{
            printf("%d is odd number.\n",num);
        }
    }   
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    checkOddEven(num);
    return 0;
}
