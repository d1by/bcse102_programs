//add and subtract two complex numbers using structs
#include <stdio.h>

int main(){
    struct complex{
        float real;
        float img;
    };

    struct complex num1, num2, sum, sub;
    int choice;

    do{
        printf("\n\n1......Create complex numbers");
        printf("\n2......Add complex numbers");
        printf("\n3......Subtract complex numbers");
        printf("\n4......Show complex numbers");
        printf("\n5......Exit\n");

        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\nEnter real part of the first complex number: ");
                scanf("%f", &num1.real);
                printf("\nEnter imaginary part of the first complex number: ");
                scanf("%f", &num1.img);

                printf("\nEnter real part of the second complex number: ");
                scanf("%f", &num2.real);
                printf("\nEnter imaginary part of the second complex number: ");
                scanf("%f", &num2.img);

                break;

            case 2:
                sum.real = num1.real + num2.real;
                sum.img = num1.img + num2.img;
                printf("\nSum: %.2f + %.2fi", sum.real, sum.img);

                break;

            case 3:
                sub.real = num1.real - num2.real;
                sub.img = num1.img - num2.img;
                printf("\nSub: %.2f + %.2fi", sub.real, sub.img);

                break;

            case 4:
                printf("\nComplex number 1: %.2f + %.2fi", num1.real, num1.img);
                printf("\nComplex number 2: %.2f + %.2fi", num2.real, num2.img);

                break;

        }
    }while(choice!=5);
}