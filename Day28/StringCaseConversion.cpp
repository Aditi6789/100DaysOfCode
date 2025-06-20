#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);   // Function that reads a line of input 
    cout<<"1. Upper Case to Lower case "<<endl;
    cout<<"2. Lower case to Upper case "<<endl;
    cout<<"3. Toggle case "<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            for (int i = 0; i < str.length(); i++){
                str[i] = tolower(str[i]);
            }
            cout<<"Lower case String : "<<str<<endl;
            break;
        case 2:
            for (int i = 0; i < str.length(); i++){
                str[i] = toupper(str[i]);
            }
            cout<<"Upper case String : "<<str<<endl;
            break;
        case 3:
            for (int i = 0; i < str.length(); i++){
                if(isupper(str[i])){
                    str[i] = tolower(str[i]);
                }else{
                    str[i] = toupper(str[i]);
                }
            }
            cout<<"Toggled case String : "<<str<<endl;
            break;
        default:
            cout<<"Invalid choice  "<<endl;
    }
    return 0;
}