//sort n numbers in ascending order

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

    printf("\nArray: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    for(int j=0; j<n; j++){
        for(int i=0; i<n-1-j; i++){
            if(arr[i+1] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}