//check if operator is arithmetic or not

#include <stdio.h>

int main(){
    printf("Enter operator: ");
    char ch;
    scanf("%c", &ch);
    switch(ch){
        case '+' :
        case '-' :
        case '*' :
        case '/' :
        case '%' : printf("arithmetic"); break;
        default : printf("not arithmetic");
    }
    return 0;
}