#include<stdio.h>

int get_factorial(int n){
    int factorial = 1;
    while(n != 0){
        factorial *= n;
        n--;
    }
    return factorial;
}
void check_strong_number(int num){
    int temp = num;
    int sum =0;
    while(num > 0){
        int digit = num % 10;
        sum += get_factorial(digit);
        num /= 10;
    }
    if (temp==sum)
    {
        printf("%d is a Strong Number.",temp);
    }
    else{
        printf("%d is not a Strong Number.",temp);
    }
}
int main(){

    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    check_strong_number(num);
    
}
