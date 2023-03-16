//functions with args with return
#include <stdio.h>

int sum(int, int);

int main(){
    printf("Enter two numbers separted by a comma: ");
    int a,b;
    scanf("%d, %d", &a, &b);
    int out = sum(a,b);
    printf("Sum: %d", out);

    return 0;
}

int sum(int a, int b){
    return a+b;
}