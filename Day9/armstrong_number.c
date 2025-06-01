#include<stdio.h>
int getDigitCount(int num){
    int count = 0;
    while(num>0){
        count++;
        num /=10;
    }
    return count;
}
int getPower(int digit,int power){
    int prod=1;
    while(power>0){
        prod *=digit;
        power--;
    }
    return prod;
}
void checkArmstrongNumber(int num){
    int temp = num;
    int sum=0;
    int power=getDigitCount(num);
    while(num >0 ){
        int digit = num % 10;
        sum += getPower(digit,power);
        num /= 10;
    }
    if(temp==sum){
        printf("%d is Arm Strong Number.",temp);
    }else{
        printf(" %d is not a Arm Strong Number.",temp);
    }
}
int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
checkArmstrongNumber(num);
}
