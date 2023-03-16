//read and display 10 numbers
#include <stdio.h>

int main(){
    int a[10];

    printf("Enter 10 numbers: \n");
    for(int i=0;i<10;i++){
        printf("Enter number %d: ", i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}