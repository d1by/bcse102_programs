//read a text and copy last n characters into another array
#include <stdio.h>

int main(){
    char str[100];
    int count=0;

    printf("Enter string: ");
    int i=0;
    scanf("%c", &str[i]);
    while(str[i]!='$'){
        i++;
        count++;
        scanf("%c", &str[i]);
    }

    printf("Enter number of characters: ");
    int num;
    scanf("%d", &num);

    i=count-num;
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