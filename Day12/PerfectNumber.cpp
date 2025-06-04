#include<iostream>
using namespace std;
 // Function for check if number is perfect number or not
int isPerfectNumber(int num){
    if(num <= 1){
        return 0;
    }
    int sum =0;
    for(int i =1; i<=(num/2); i++){
        if(num%i==0){
            sum += i;
        }
    }
    return sum==num;
}
//Let's start here
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    //Call the function and display result
    int ans = isPerfectNumber(num);
    if (ans)
       cout<<num<<" is perfect number";
    else
       cout<<num<<" is not a perfect number";
    return 0;
}