//swap 2 numbers with call by value
#include <stdio.h>

int swap_val(int, int);
int swap_ref(int *, int *);

int main(){
    printf("Enter two numbers separated by a comma: ");
    int a, b;
    scanf("%d, %d", &a, &b);

    printf("a = %d", a);
    printf("\nb = %d", b);

    swap_val(a, b);
    swap_ref(&a, &b);

    return 0;
}

int swap_val(int a, int b){
    int temp = a;
    a = b;
    b = temp;

    printf("\nCall by value: ");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}

int swap_ref(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("\nCall by reference: ");
    printf("\na = %d", *a);
    printf("\nb = %d", *b);

    return 0;     
}