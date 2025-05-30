#include<iostream>
using namespace std;

bool getCheckPalindromeNumber(int num){
    int temp = num;
    int reverse = 0;
    while(num != 0){
        reverse = (reverse*10) + (num%10);
        num = num /10;
    }
    return reverse == temp;
}
int main(){
    int num;
    cout<<"\nEnter the number: ";
    cin>>num;
    int res = getCheckPalindromeNumber(num);
    if(res == true){
        cout<<num<<" is a Palindrome number.";
    }else{
        cout<<num<<" is not a Palindrome number.";
    }
    return 0;
}
