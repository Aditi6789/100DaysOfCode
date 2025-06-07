#include<stdio.h>
double calculate_power( int base,int exponent){ 

    double res = 1.0;
    if(exponent >= 0){
        for(int i =1; i<= exponent; i++){
            res *= base;
        }
    }else{
        for(int i =1;i <= (-exponent);i++){
            res /= base;
       }
    }
    return res;
}
int main(){
    int base,exponent;
    printf("Enter the Base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);
    printf("%d raised to the power of %d is %f\n",base,exponent,calculate_power(base,exponent));
    return 0;
}
