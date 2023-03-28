//array using pointers
#include <stdio.h>

int main(){
    int arr[] = {0,1,2,3,4,5};
    int *pArr = arr;

    for(int i=0; i<6; i++){
        printf("%d ", *(pArr + i));
    }

    return 0;
}