#include<iostream>
using namespace std;

//Recursion method to find sum of first n natural numbers.

int getSum(int num){
    if(num ==1){
        return 1; // Base case
    }
    return num + getSum(num-1);  // Recursion step
}
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    // Call the function and display result
    cout<<"Sum of first "<<n<<" natural number: "<<getSum(n);
    return 0;
}
