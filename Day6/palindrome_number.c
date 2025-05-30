#include<stdio.h>
int checkPalindrome(int num){
    int temp = num;
    int reverse = 0;
    while(num != 0){
        reverse = (reverse*10) + (num % 10);
        num /= 10;
    }
    if(temp != reverse)
        return 0;
    else
        return 1;
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int res = checkPalindrome(num);
    if(res==1)
        printf("%d is a Palindrome number.",num);
    else
        printf("%d is not a Palindrome number.",num);
    return 0;
}
