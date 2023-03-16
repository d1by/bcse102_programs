//count the number of positive, negative, and zeroes

#include <stdio.h>

int main(){
    int pos=0, neg=0, zer=0;
    while(1){
        printf("Enter a number (type 999 to stop): ");
        int n;
        scanf("%d",&n);
        if(n!=999){
            if(n<0){
                neg++;
            }
            else if(n>0){
                pos++;
            }
            else{
                zer++;
            }
        }
        else{
            printf("\n\nPositives: %d\nNegatives: %d\nZeroes: %d", pos, neg, zer);
            break;
        }
    }    
}