//find biggest among 10 numbers

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("\nLargest number: %d", max);

    return 0;
}