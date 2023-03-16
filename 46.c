//print substring
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

    printf("Enter starting value, end value: ");
    int m,n;
    scanf("%d,%d", &m, &n);
    
    char b[100];
    i=m;
    int j=0;
    while(i<=n && (a[i] != '\0')){
        b[j] = a[i];
        i++;
        j++;
    }
    b[j]='\0';
    
    printf("\nOriginal string: %s", a);
    printf("\nReversed string: %s", b);

    return 0;
}