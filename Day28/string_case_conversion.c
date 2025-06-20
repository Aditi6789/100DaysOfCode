#include<stdio.h>
#include<ctype.h>

int main(){
    
    char str[100];
    printf("Enter a String : ");
    fgets(str , sizeof(str), stdin); 

    printf("1. Upper Case to Lower case. \n");
    printf("2. Lower case to Upper case. \n");
    printf("3. Toggle case. \n ");
    int choice;
    scanf("%d",&choice);

    switch(choice){
        case 1:
            for (int i = 0; i < str[i]; i++){
                str[i] = tolower(str[i]);
            }
            printf("Lower case String : %s " , str);
            break;
        case 2:
            for (int i = 0; i < str[i]; i++){
                str[i] = toupper(str[i]);
            }
            printf("Upper case String : %s " , str);
            break;
        case 3:
            for (int i = 0; i < str[i]; i++){
                if(isupper(str[i])){
                    str[i] = tolower(str[i]);
                }else{
                    str[i] = toupper(str[i]);
                }
            }
            printf("Toggled case String : %s " , str);
            break;
        default:
            printf("Invalid choice  ");
    }
    return 0;
}
