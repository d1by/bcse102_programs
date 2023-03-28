//pointer arithmetic 
#include <stdio.h>

int main(){
    int a = 22;
    int *p = &a;
    printf("%u\n", p);
    printf("%u", ++p);
    printf("\n%u", --p);

    return 0;
}