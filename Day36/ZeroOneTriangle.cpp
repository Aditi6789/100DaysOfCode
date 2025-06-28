#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of row: ";
    cin>>rows;

    for(int i= 1; i<= rows; i++){
        //print spaces
        for(int j= 1; j<= rows-i; j++){
            cout<<" ";
        }
        //Print 0-1 pattern
        for (int k = 2; k <= i*2; k++){
            cout<<(i+k)%2;
        }
        cout<<endl;
        
    }
    return 0;
}
