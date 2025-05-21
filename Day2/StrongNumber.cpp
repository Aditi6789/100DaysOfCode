#include<iostream>
using namespace std;

int getFactorial(int n){
    int factorial = 1;
    while(n != 0){
        factorial *= n;
        n--;
    }
    return factorial;
}
bool getIsArmStrongNumber(int num){
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

    bool ans = getIsArmStrongNumber(num);
    if (ans==true)
    {
        cout<<num<<" is a Strong Number.";
    }
    else{
        cout<<num<<" is not a Strong Number.";
    }
    
}
