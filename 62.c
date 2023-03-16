//factorial of given number
#include <stdio.h>

int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    
    int prod=1;
    
    for(int i=num; i>=1; i--){
        prod*=i;
    }

    printf("Factorial: %d", prod);
    return 0;
}