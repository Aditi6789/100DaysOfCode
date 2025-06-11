#include<stdio.h>
//Function to calculate the sum of proper divisor.
int get_sum_of_divisors(int n){
    int sum =0;
    for(int i = 1; i <= (n/2); i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum;
}
//Function to check if two numbers are amicable 
int are_amicable_number(int a , int b){
    return ( get_sum_of_divisors(a) == b ) && (get_sum_of_divisors(b) == a);
}
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(are_amicable_number(num1,num2)){
        printf("%d and %d are amicable number.\n",num1,num2);
    }else{
        printf("%d and %d are not amicable number\n.",num1,num2);
    }
    return 0;
}
