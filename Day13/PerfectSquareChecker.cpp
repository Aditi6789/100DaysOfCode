#include<iostream>
using namespace std;

// Function to check if a number is a perfect square
bool isPerfectSquare(int num){
    if(num <0 ){
        return false; // Negative number can not be a perfect square
    }
    int i =0;
    while(i*i <= num){
        if(i*i == num){
            return true;
        }
        i++;
    }
    return false;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;

    //Store the result in a variable and display it
    bool ans = isPerfectSquare(num);
    if(ans){
        cout<<num<<" is a perfect square.";
    }
    else{
        cout<<num<<" is a perfect square.";
    }
    return 0;
}
