#include<iostream>
using namespace std;
int getSumOfDigit(int num){
    int sum=0;
    while(num !=0){
        sum += (num%10);
        num /= 10;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int totalSum = getSumOfDigit(num);
    cout<<"Sum of digits: "<<totalSum;
    return 0;
}