#include<iostream>
using namespace std;
//Function to find the First duplicate in a array
int getFirstDuplicate(int arr[],int size){
    //Iterate over each element in the array
    for(int i = 0; i<size; i++){
        //Compare the urrent element with every other element that comes after it
        for(int j = i+1; j<size; j++){
            //Check if the elements are equal
            if(arr[i] == arr[j]){
                //If it is, return the element as the first duplicate
                return arr[i];
            }
        }
    }
    return -1; // Return -1 if no duplicate are found 
}
int main(){
    int arr[] = {2,1,3,5,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int firstDuplicate = getFirstDuplicate(arr,size);
    if (firstDuplicate != -1 ){
        cout<<"First duplicate : "<<firstDuplicate<<endl;
    }else{
        cout<<"No duplicate found "<<endl;
    }
    return 0;
}
