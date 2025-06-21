#include<iostream>
using namespace std;

void getPrintFloydTriangle(int rows){
    int num = 1;
    //Outer loop to iterate over the rows
    for(int i = 1; i<= rows; i++){
        //inner loop to print number in each rows
        for(int j = 1; j <= i; j++){
            //print the current number and increment it.
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
int main(){
    int rows;
    cout<<"Enter the number of rows :  ";
    cin>>rows;
    getPrintFloydTriangle(rows);
    return 0;
}
