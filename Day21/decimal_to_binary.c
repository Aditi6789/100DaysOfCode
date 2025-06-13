#include<stdio.h>
void decimalToBinary(int decimal){
    int binary[32];
    int i = 0;
    
    while(decimal > 0){
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for(int j= i-1; j>= 0; j--){
        printf("%d",binary[j]);
    }
}
int main(){
    int decimal;
    printf("Enter the Decimal number: ");
    scanf("%d" ,&decimal);
    
    printf("Binary representation : ");
    decimalToBinary(decimal);

    return 0;
}
