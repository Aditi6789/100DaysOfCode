#include<stdio.h>

int getReverseNumber(int num){

    // To handle a negative number 

    if(num <0){    
        num = -num;
        int reverseNum = getReverseNumber(num);
        reverseNum = -reverseNum;
        return reverseNum;
    }
    // to handle positive number

    int reverseNum = 0;
    while( num !=  0){
        reverseNum = (reverseNum * 10) + ( num % 10);   // main logic 
        num = num / 10;
    }
    return reverseNum;
}
int main(){ 
    int num; 
    printf("Enter the Number :");
    scanf("%d",&num); 
    int ans = getReverseNumber(num);
    printf("Reverse number is : %d" , ans);
}

