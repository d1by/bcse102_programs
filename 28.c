//read the numbers continuously and check if number is positive or negative or zero

#include <stdio.h>

int main(){
    while(1){
        printf("\n\nEnter a number (type 999 to stop): ");
        int n;
        scanf("%d",&n);
        if(n!=999){
            if(n<0){
                printf("Negative number");
            }
            else if(n>0){
                printf("Positive number");
            }
            else{
                printf("Number is zero");
            }
        }
        else{
            printf("\n\nExiting...");
            break;
        }
    }    
}