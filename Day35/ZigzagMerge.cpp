#include<iostream>
using namespace std;

void getZigzagArray(int arr1[],  int m ,int arr2[] , int n){

    int size = m+n;
    int new_array[size]; 
    int i =0 , j=0, k=0;  
    //Merge arrays in zigzag pattern
    while( i < m  && j < n){
        new_array[k] = arr1[i++];
        k++;
        new_array[k] = arr2[j++];
        k++;
    }
    //Append remaining element, if any
    while(i < m ){ 
        new_array[k] = arr1[i++];
        k++;
    }
    while(j < n ){
        new_array[k] = arr2[j++];
        k++;
    }
    //print the merge array
    for(int a = 0 ; a < size; a++){
        cout<<new_array[a]<<" ";
    }
}
int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[]= {7,8,9,10,11};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    getZigzagArray(arr1,m,arr2,n);
    return 0;
}
