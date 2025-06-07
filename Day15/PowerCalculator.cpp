#include<iostream>
using namespace std;

double calculatePower(int base,int exponent){ 
    double res = 1.0;
    if(exponent >= 0){
        for(int i =1; i<= exponent; i++){
            res *= base;
        }
    }else{
        for(int i =1;i <= (-exponent);i++){
            res /= base;
        }
    }
    return res;
}
int main(){
    int base,exponent;
    cout<<"Enter the Base: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>exponent;
    cout<<exponent<<" raised to the power of "<<base<<" is "<<calculatePower(base,exponent)<<endl;
    return 0;
}
