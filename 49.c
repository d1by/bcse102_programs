//reverse string
#include <stdio.h>

int main(){
    char a[100];
    printf("Enter a string (end with $): ");
    int i = 0;
    scanf("%c",&a[i]);
    while(a[i] != '$'){
        i++;
        scanf("%c", &a[i]);
    }
    a[i]='\0';

    char b[100];
    i--;
    int j=0;    
    while(i>=0){
        b[j] = a[i];
        j++;
        i--;
    }

    printf("\nOriginal string: %s", a);
    printf("\nReversed string: %s", b);

    return 0;
}