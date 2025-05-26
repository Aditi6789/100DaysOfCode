#include<iostream>
using namespace std;

int getFactorial(int num){

    if(num <0 ){
        return -1;
    }
    if(num == 0){
        return 1;
    }
    else{
        int prod = 1;
        for(int i=1; i<= num; i++){
            prod *= i;
        }
        return prod;
    }
}

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    int ans = getFactorial(num);
    if(ans == -1){
        cout<<"\nThe Factorial of a negative number is not defined";
    }
    else{
        cout<<"The Factorial is : "<<ans<<endl;
    }
}
