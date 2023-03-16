//biggest amoing 10 numbers 

#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 numbers: ");
    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    
    int max=0;
    for(int i=0; i<10; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    printf("Largest number: %d\n",  max);

    return 0;
}
// your code fails for very large number so give proper exception here. Thank you.