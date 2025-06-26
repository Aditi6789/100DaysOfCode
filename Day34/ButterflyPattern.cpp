#include<iostream>
using namespace std;

void get_butterfly_print(int n){
    //upper part of butterfly pattern
    for(int i  = 1; i< n; i++){
        //print stars
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        //print space
        for(int j = 1; j <= 2*(n-i); j++){
            cout<<" ";
        }
        //print stars
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower part of butterfly pattern
    for(int i  = n; i >= 1; i--){
        //print stars
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        //print space
        for(int j = 1; j <= 2*(n-i); j++){
            cout<<" ";
        }
        //print stars
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;

    get_butterfly_print(n);

    return 0;

}