#include<iostream>
using namespace std;

//Function to calculate GCD using the Euclidean algorithm

int getGreatestCommonDivisor(int num1,int num2){
    if(num2 == 0){
        return num1;
    }else{
        return getGreatestCommonDivisor(num2,num1%num2);
    }
}
// Function to calculate LCM using recursion
int getLeastCommonMultiple(int num1,int num2){
    return (num1*num2) / getGreatestCommonDivisor(num1,num2);
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
    cout<<"\nLCM of "<<num1<<" and "<<num2<<" is : "<<getLeastCommonMultiple(num1,num2);
    return 0;
}

