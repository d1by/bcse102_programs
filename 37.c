//read and display word until blankspace

#include <stdio.h>

int main(){
    printf("Enter string: ");
    char str[100];
    for(int i=0; ; i++){
        scanf("%c", str[i]);
        if(str[i] == ' '){
            str[i] = '\0';
            break;
        }
    }
    
    int i=0;
    while(str[i]!='\0'){
        printf("%c", str[i]);
    }
    printf("%s", str);

    return 0;
}