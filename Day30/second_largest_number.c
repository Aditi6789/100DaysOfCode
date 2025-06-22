#include<stdio.h>
#include<limits.h>
void getSecondLargestNumber(int arr[],int size){
    int max = INT_MIN;
    int second_max= INT_MIN;
    for(int i =0; i<size; i++){
        if(arr[i] > max){
            second_max = max;  //Update second_max to the current max
            max = arr[i];      //Update max to the new element
        }
        if(arr[i] > second_max && arr[i] != max){
            second_max = arr[i];
        }
    }
    if(second_max == INT_MIN){
        printf("There is no second largest numer.\n");
    }else{
        printf("The second largest number is : %d \n",second_max);
    }
}
int main(){
    int size;
    printf("Enter  the number of element : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d : ",size);
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    getSecondLargestNumber(arr,size);
    return 0;
}
