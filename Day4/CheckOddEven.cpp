// Program to check number is even or odd number..

#include<iostream>
using namespace std;
void checkOddEven(int num){
        // All even number is divisible by 2 
        if(num % 2 == 0){    
            cout<<num<<" is a even number. "<<endl;
        }
        else{
            cout<<num<<" is a odd number."<<endl;;
        }
    }
    
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    checkOddEven(num);
    return 0;
}
