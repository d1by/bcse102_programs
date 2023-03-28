//
#include <stdio.h>

int main(){
    int a = 50;
    int b = 100;

    int *pA = &a;
    int *pB = &b;
   
    printf("%u", pA);
    printf("%u", pB);
    
    return 0;
}