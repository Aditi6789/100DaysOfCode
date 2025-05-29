#include<iostream>
using namespace std;

int checkPrimeNumber(int num){
    int isPrime = 1;
    if(num == 0  || num  == 1){
        isPrime = 0;
    }else{
        for(int i = 2; i<= num / 2; i++){
            if(num %i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    return isPrime;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int ans = checkPrimeNumber(num);
    if(ans == 0){
        cout<<num<<" is not a prime number";
    }else{
        cout<<num<<" is a prime number";
    }
    return 0;
}
