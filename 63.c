//fibonacci series
#include <stdio.h>

int main(){
    printf("Enter number of elements: ");
    int num; 
    scanf("%d", &num);

    int a=0, b=1, temp;
    printf("%d, %d, ", a, b);
    for(int i=0; i<num; i++){
        temp = a;
        a = b;
        b = temp + b;
        if(i!=num-1)
            printf("%d, ", b);
        else
            printf("%d", b);
    }

    return 0;
}