#include<stdio.h>
 // Function for check if number is perfect number or not
int getIsPerfectNumber(int num){
    if(num <= 1){
        return 0;
    }
    int sum =0;
    for(int i =1; i<=(num/2); i++){
        if(num%i == 0){
            sum += i;
        } 
    }
    return  num == sum;
}
//Let's start here
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    int ans = getIsPerfectNumber(num);
    // Call the function and display result
    if (ans)
       printf("%d is perfect number",num);
    else
       printf("%d is not a perfect number",num);
    return 0;
}