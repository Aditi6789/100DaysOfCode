#include<stdio.h>

// function to calculate factorial 

int getFactorial(int n){
    int fact = 1;
    while(n != 0){
        fact *= n;
        n--;
    }
    return fact;
}

// function to check if a number is strong 

int getCheckStrongNumber(int num){

    if(num <0){           
        return -1;
    }
    if(num ==  0){
        return 0;
    }
    int temp = num;
    int sum =0;
    while(temp != 0){
        sum += getFactorial(temp%10);
        temp /= 10;
    }
    return (sum == num);
}
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int res = getCheckStrongNumber(num); 
    if (res == 1){
        printf("%d is a Strong Number.",num);
    }else if (res == 0)
    {
        printf("%d is a not Strong Number.",num);
    }else{
        printf("strong number are not defined for negative number");
    }
    return 0;
}
