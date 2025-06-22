#include<iostream>
#include<climits>
using namespace std;

void getSecondLargestNumber(int arr[],int size){

    //Initialize max and second_max to the smallest possible integer value
    int max = INT_MIN;
    int second_max= INT_MIN;

    for(int i =0; i<size; i++){
        //Update max and second_max if larger element is found
        if(arr[i] > max){
            second_max = max;  //Update second_max to the current max
            max = arr[i];      //Update max to the new element
        }
        //Update second_max if an element is between max and second_max
        if (arr[i] > second_max && arr[i] != max){
            second_max = arr[i];  
        } 
    }

    //Check if there is second number 
    if(second_max == INT_MIN){
        cout<<"There is no second largest numer."<<endl;
    }else{
        cout<<"The second largest number is : " <<second_max<<endl;
    }
}
int main(){
    //Declare an array to store the elements
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    getSecondLargestNumber(arr,size);
    return 0;
}
