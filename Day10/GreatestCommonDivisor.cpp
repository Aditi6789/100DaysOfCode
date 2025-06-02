// Greatest Common Divisor (GCD)

#include<iostream>
using namespace std;

//Function to calculate GCD using the Euclidean algorithm

int getGreatestCommonDivisor(int num1,int num2){
    if(num2 == 0){
        return num1;
    }
    return getGreatestCommonDivisor(num2,num1%num2);
}

int main(){
    int num1,num2;
    cout<<"Enter the two integers: ";
    cin>>num1>>num2;

    //Ensure the number are positive 
    if(num1<0){
        num1 = -num1;
    }
    if(num2<0){
        num2= -num2;
    }
    int gcd = getGreatestCommonDivisor(num1,num2);
    cout<<"\nGCD of "<<num1<<" and "<<num2<<" is : "<<gcd;
    return 0;
}
