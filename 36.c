//3x3 matrix multiplication

#include <stdio.h>

int main(){
    int arr1[3][3];
    printf("--- Matrix 1---\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Element [%d][%d]:", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[3][3];
    printf("--- Matrix 2---\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Element [%d][%d]:", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
    }

    int sum=0;
    int arr_out[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                sum += arr1[i][k] * arr2[k][j];
            }
            arr_out[i][j] = sum;
            sum=0;
        }
    }

    printf("--- Multiplying Matrix 1 and 2 ---\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", arr_out[i][j]);
        }
        printf("\n");
    }

    return 0;
}