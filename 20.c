// calculator using switch case
#include <stdio.h>
int main(){
    printf("Enter two numbers separated by commas: ");
    double n1,n2;
    scanf("%lf,%lf",&n1,&n2);
    printf("1........Add\n2........Subtract\n3........Multiply\n4........Divide\n");
    int choice;
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("%g\n",n1+n2);
            break;
        case 2:
            printf("%g\n",n1-n2);
            break;
        case 3:
            printf("%g\n",n1*n2);
            break;
        case 4:
            printf("%g\n",n1/n2);
            break;
        default: printf("invalid choice\n");
    }

    return 0;
}