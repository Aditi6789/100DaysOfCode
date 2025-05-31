#include<iostream>
using namespace std;

// function to calculate factorial  

int getFactorial(int n){
    int fact = 1;
    while(n != 0){
        fact *= n;
        n--;
    }
    return fact;
}

// function to check if a number is strong 

int getIsArmStrongNumber(int num){

    if(num <0){           
        return -1;
    }
    if(num ==  0){
        return 0;
    }
    int temp = num;
    int sum =0;
    while(num > 0){
        int digit = num % 10;
        sum += getFactorial(digit);
        num /= 10;
    }
    return temp == sum;
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int ans = getIsArmStrongNumber(num);
    if(ans== 1){
        cout<<num<<" is a Strong Number.";
    }else if(ans == 0){
        cout<<num<<" is not a Strong Number.";
    }else{
        cout<<"strong number are not defined for negative number";
    }
    return 0;
}
