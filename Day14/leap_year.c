#include<stdio.h>

//Function to check if the year is a leap year
int is_leap_year(int year){

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return 1; // Leap year
    }else{
        return 0; // not a leap year
    }
}
int main(){
    int year;
    //Get the year from the user
    printf("Enter a year: ");
    scanf("%d",&year);
    int ans = is_leap_year(year);
    if (ans == 1){
        printf("%d is a leap year",year);
    }else{
        printf("%d is not a leap year",year);
    }
    return 0;
}
