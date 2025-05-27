#include<stdio.h>

int countDigits(int num){
    if(num ==0){
        return 1;
    }
    if(num<0){
        num = - num; // Convert to positive if negative
    }
    int count =0;
    while(num>0){
        count = count + 1;
        num = num/10;
    }
    return count;
}
int main(){

    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    int  count = countDigits(num);
    printf("The Number of digit in a number is : %d ",count);
}

