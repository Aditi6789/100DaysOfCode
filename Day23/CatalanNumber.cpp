#include<iostream>
using namespace std;

//Function to calculate the nth Catalan number
long long getCatalan(int num){
    //Create an array to store the calculated Catalan number
    long long catalanNumbers[num+1];

    // Initialize the base case
    catalanNumbers[0] = 1; 
    catalanNumbers[1] = 1;

    //Calculate Catalan numbers from C(2) to C(n)
    for(int i = 2; i<=num; i++){
        catalanNumbers[i] = 0;
        for(int j = 0; j<i; j++){
            catalanNumbers[i] += catalanNumbers[j]*catalanNumbers[i-j-1];
        }
    }
    //Return the calculate nth Catalan number
    return catalanNumbers[num];
}
int main(){
    int num;
    cout<<" Enter the number: ";
    cin>>num;
    //Calculate and print the nth Catalan number
    cout<<"Catalan number = C(" << num << ")= "<<getCatalan(num)<<endl;
    return 0;
}
