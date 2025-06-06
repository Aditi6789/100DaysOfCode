#include<iostream>
using namespace std;

//Function to check if the year is a leap year
int isLeapYear(int year){

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        return 1; // Leap year
    }else{
        return 0; // not a leap year
    }
}
int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    int ans = isLeapYear(year);
    if (ans == 1){
       cout<<year<<" is a leap year";
    }else{
       cout<<year<<" is not a leap year";
    }
    return 0;
}

