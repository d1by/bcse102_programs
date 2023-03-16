//functions without arguments/return
#include <stdio.h>

void sum();

int main() {
    printf("Enter two numbers separted by a comma: ");
    int a,b;
    scanf("%d, %d", &a, &b);
    sum(a,b);
    return 0;
}

void sum(int a, int b){
    printf("Sum: %d", a+b);
}