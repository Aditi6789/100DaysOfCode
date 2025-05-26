#include<stdio.h>

int getFactorial(int num){
    if(num <0){
        return -1;
    }
    if(num == 0){
        return 1;
    }
    else{
        int fact = 1;
        for(int i=1; i<= num; i++){

            fact *= i;

        }
        return fact;
    }
}
int main(){

    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int res = getFactorial(num);
    if(res==0){
        printf("Factorial of a negative number is not defined");
    }
    else{
        printf("\n Factorial is %d",res);
        printf("\n---------------------------------");
    }
}
