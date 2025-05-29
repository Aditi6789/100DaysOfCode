#include<stdio.h>

int getCheckPrimeNumber(int num){

    int isPrime = 1;
    if(num == 0  || num  == 1){
        isPrime = 0;
    }else{
        for(int i = 2; i<= num / 2; i++){
            if(num %i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    return isPrime;
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int ans = getCheckPrimeNumber(num);
    if(ans == 0){
        printf("%d is not a prime number",num);
    }else{
        printf("%d is a prime number",num);
    }
    return 0;
}
