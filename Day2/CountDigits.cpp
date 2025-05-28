#include<iostream>
using namespace std;

int countDigits(int num){
    if(num == 0){
        return 1;
    }
    else{
        if(num<0){
            num = -num;
            return countDigits(num);
        }
        else{
            int count =0;
            while(num >0){
                count = count +1;
                num = num / 10;
            }
            return count;
        }
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The number of digit in a number is :"<<countDigits(num);
    return 0;
}


