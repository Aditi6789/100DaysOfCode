#include<iostream>
using namespace std;

int getReverseNumber(int num){
    // To handle the negative number
    if(num <0){
        num = -num;
        int reversedNum = getReverseNumber(num);
        reversedNum = -reversedNum;
        return reversedNum;
    }
    // For positive integer number
    int reversedNum = 0;
    while(num != 0){
        reversedNum = (reversedNum* 10) + (num% 10);
        num = num / 10;
    }
    return reversedNum;
}
int main(){
    
    int originalNum;
    cout<<"Enter the Number :";
    cin>>originalNum;

    int reversedNum  =  getReverseNumber(originalNum);
    cout<<"The reverse number of a given number is : "<<reversedNum;
    return 0;
}

