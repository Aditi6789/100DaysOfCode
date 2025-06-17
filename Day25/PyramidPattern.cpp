#include<iostream>
using namespace std;
//Function to print Pyramid pattern
void printPyramid(int n){

    for(int i = 0; i<n; i++){
        // Print space before asterisks
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        //Print asterisks
        for(int k = 0; k<2*i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n; 
    cout<<"Enter the value of n: ";
    cin>>n;
    printPyramid(n);
    return 0;
}
