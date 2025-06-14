#include<stdio.h>

//Function for Binary to Decimal conversion
int binaryToDecimal(long binary){
    int decimal = 0, base = 1, remainder;

    while(binary != 0){
        remainder =  binary % 10;   //Extract the last digit
        decimal += (remainder*base); //Multiply with thw current base
        binary /= 10;               //Remove the last digit
        base *= 2;                  //Update the base(2^i)
    }
    return decimal;
}
//Let's start here
int main(){
    long binary;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    int decimal = binaryToDecimal(binary);
    printf("The decimal equivalent is : %d \n",decimal);

    return 0;
}