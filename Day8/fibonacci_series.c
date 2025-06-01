#include<stdio.h>

int main(){
    int num , firstTerm = 0 , secondTerm = 1 , nextTerm;

    printf("Enter the term of series:  ");
    scanf("%d", &num);

    printf("%d %d" , firstTerm , secondTerm);
    for( int i = 2; i<= num ; i++){

        nextTerm = firstTerm + secondTerm;
        printf(" %d",nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;

    }
    return 0;
}






