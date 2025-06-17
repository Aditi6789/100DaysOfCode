#include<stdio.h>

//Function to print Pyramid pattern
void print_pyramid(int n){
    for(int i=0; i<n; i++){

        // Print space before asterisks
        for(int j = 0; j<n-i-1; j++){
            printf(" ");
        }
        // Print asterisks
        for(int k =0; k<2*i+1; k++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    print_pyramid(n);
    return 0;
}
