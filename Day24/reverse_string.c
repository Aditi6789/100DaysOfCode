#include<stdio.h>
#include<string.h>
//Function to reverse a string
void getReverseString(char str[],char reversed[]){
    int size =strlen(str);
    int index = 0;
    for (int i = size - 1 ; i >= 0; i--)
    {
        reversed[index++] = str[i];
    }
    reversed[index] = '\0';
}
//Let's Start here
int main(){
    char str[100],reversed[100];
    //Input a string
    printf("Enter a String : ");
    scanf("%s",&str);
    printf("\nOriginal string: %s",str); 
    //Call the reverse function
    getReverseString(str,reversed);
    printf("\nReverse string: %s",reversed);
    return 0;
}
