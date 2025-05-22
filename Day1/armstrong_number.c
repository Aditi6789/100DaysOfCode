#include<stdio.h>
int get_digit_count(int num){
    int count = 0;
    while(num>0){
        count++;
        num /=10;
    }
    return count;
}
int get_power(int digit,int power){
    int prod=1;
    while(power>0){
        prod *=digit;
        power--;
    }
    return prod;
}
void check_armstrong_number(int num){
    int temp = num;
    int sum=0;
    int power=get_digit_count(num);
    while(num >0 ){
        int digit = num % 10;
        sum += get_power(digit,power);
        num /= 10;
    }
    if(temp==sum){
        printf("%d is Arm Strong Number.",temp);
    }
    else{
        printf(" %d is not a Arm Strong Number.",temp);
    }
}
int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
check_armstrong_number(153);
}
