//area of circle
#include <stdio.h>

int main(){
    printf("Enter radius: ");
    int r;
    scanf("%d",&r);
    int *pR = &r;

    float *area;
    *area = 3.1415 * (*pR) * (*pR);

    printf("Area of circle: %f", *area);

    return 0;
}