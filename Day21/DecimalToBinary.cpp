#include<iostream>
using namespace std;

void decimalToBinary(int decimal){
    int binary[32];
    int i = 0;
    
    while(decimal > 0){
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for(int j= i-1; j>= 0; j--){
        cout<<binary[j];
    }
}
int main(){
    int decimal;
    cout<<"Enter the Decimal number: ";
    cin>>decimal;
    cout<<"Binary representation : ";
    decimalToBinary(decimal);
    return 0;
}
