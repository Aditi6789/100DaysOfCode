#include<iostream>
using namespace std;

//Function to find the sum of positive number in a array.
int getSumOfPositiveNumbers(int arr[],int size){

    int sum =0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            sum += arr[i];
        }
    }
    return sum; 
}
//Let's Start here
int main(){
    int arr[]={-8,9,4,-3,5,-4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result = getSumOfPositiveNumbers(arr,size);
    cout<<"Sum of Positive number: "<<result<<endl;
    return 0;
}

