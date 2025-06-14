#include<iostream>
using namespace std;

//Function for Binary to Decimal conversion
int getBinaryToDecimal(long binary){
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
    cout<<"Enter a binary number: ";
    cin>>binary;
    int decimal = getBinaryToDecimal(binary);
    cout<<"The decimal equivalent is : "<<decimal<<endl;
    return 0;
}
