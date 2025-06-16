#include<iostream>
using namespace std;

//Function to reverse a string
string getReverseString(string str){
    string reversed ="";
    for (int i = (str.length()-1 ); i >= 0; i--){
        reversed += str.at(i);
    }
    return reversed;
}
int main(){
    string str,reversed;

    //Input a string
    cout<<"Enter a String : ";
    cin>>str;

    //Call the reverse function
    reversed = getReverseString(str);
    cout<<"\nOriginal string: "<<str; 
    cout<<"\nReverse string: "<<reversed;
    return 0;
}
