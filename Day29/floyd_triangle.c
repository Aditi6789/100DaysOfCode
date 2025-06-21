#include<stdio.h>

void getPrintFloydTriangle(int rows){
    int num = 1;

    //Outer loop to iterate over the rows
    for(int i = 1; i<= rows; i++){
        //inner loop to print number in each rows
        for(int j = 1; j <= i; j++){
            //print the current number and increment it.
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
int main(){
    int rows;
    printf("Enter the number of rows :  ");
    scanf("%d",&rows);
    getPrintFloydTriangle(rows);
    return 0;
}
