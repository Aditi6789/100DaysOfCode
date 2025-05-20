#include<stdio.h>
int getDigitCount(int num){
    int count=0;
    while(num>0){
        count++;
        num /= 10;
    }
    return count;
}
int getPower(int digit, int power){
    int prod = 1;
    while(power > 0){
        prod *= digit;
        power--;
    }
    return prod;
}
void getIsArmStrongNumber(int num){
    int temp = num;
    int sum = 0;
    int count=getDigitCount(num);

    while(num>0){
        int digit = num % 10;
        sum += getPower(digit,count);
        num /= 10;
    }
    if(temp==sum){
        printf(" It is a Arm Strong Number");
    }
    else{
        printf("It is not a Arm Strong Number");
    }
}
int main(){

    getIsArmStrongNumber(153);

}
