#include<stdio.h>
//Function to reverse an array
void reverseArray(int arr[],int size){

    //Initialize two pointer, one at the start and one at end of the array
    int start = 0;
    int end = size - 1;

    //Swap elements from the start ans end,moving towords the center
    while( start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};

    //Calculate size of an array
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size);

    //print the reverse array
    for (int i = 0; i < size; i++){
       printf("%d ",arr[i]);
    }
    return 0;
}