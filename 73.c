//accept string with pointers
#include <stdio.h>

int main(){
    char arr[100], *pArr;
    
    for(pArr = &arr; (*pArr = getchar())!='$'; pArr++);
    *pArr = '\0';

    for(pArr = &arr; *pArr!='\0'; pArr++){
        putchar(*pArr);
    }

    return 0;
}