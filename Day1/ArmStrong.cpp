#include<iostream>
using namespace std;

int getDigitCount(int num){
    int count = 0;
    while(num > 0){
        count++;
        num /= 10;
    }
    return count;
}
int getPower(int digit,int power){
    int prod =1;
    while(power>0){
        prod *= digit;
        power--;
    }
    return prod;
}
bool getIsArmStrongNumber(int num){
    int temp = num;
    int sum = 0;
    int power = getDigitCount(num);
    while( num>0){
        int digit = num % 10;
        sum  += getPower(digit,power);
        num /= 10;
    }
    return temp == sum;
}
int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    bool ans = getIsArmStrongNumber(num);
    if (ans == true)
    {
       cout<<num<<" is a Arm Strong Number";
    }
    else{
        cout<<num<<" is not a Arm Strong Number.";
    }
    return 0;
}