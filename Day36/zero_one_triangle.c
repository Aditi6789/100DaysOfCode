#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of row: ");
    scanf("%d",&rows);

    for(int i= 1; i<= rows; i++){
        //print spaces
        for(int j= 1; j<= rows-i; j++){
            printf(" ");
        }
        //Print 0-1 pattern
        for (int k = 2; k <= i*2; k++){
            printf("%d",(i+k)%2);
        }
        printf("\n");
        
    }

    return 0;
}
