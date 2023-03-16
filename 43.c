//read characters until $ appears and copy into new array

#include <stdio.h>

int main(){
    char str[100];

    printf("Enter string: ");
    int i=0;
    scanf("%c", &str[i]);
    while(str[i]!='$'){
        i++;
        scanf("%c", &str[i]);
    }

    i=0;
    char b[100];
    while(str[i]!='$'){
        b[i]=str[i];
        i++;
    }

    b[i]='\0';
    
    printf("\n");
    i=0;
    while(b[i]!='\0'){
        printf("%c", b[i]);
        i++;
    }

    return 0;
}