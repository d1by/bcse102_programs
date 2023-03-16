//demonstrate string functions
#include <stdio.h>
#include <string.h>

int main(){
    printf("Enter first string: ");
    char str1[20];
    gets(str1);

    printf("Enter second string: ");
    char str2[20];
    gets(str2);

    printf("Concatenate string: ");
    puts(strcat(str1,str2));
}