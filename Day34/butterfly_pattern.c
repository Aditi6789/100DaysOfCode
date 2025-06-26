#include<stdio.h>

void get_butterfly_print(int n){
    //upper part of butterfly pattern
    for(int i  = 1; i< n; i++){
        //print stars
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        //print space
        for(int j = 1; j <= 2*(n-i); j++){
            printf(" ");
        }
        //print stars
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    //lower part of butterfly pattern
    for(int i  = n; i >= 1; i--){
        //print stars
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        //print space
        for(int j = 1; j <= 2*(n-i); j++){
            printf(" ");
        }
        //print stars
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

}
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);

    get_butterfly_print(n);

    return 0;

}