#include <stdio.h>
int main(){
    int matrix[3][3];
    int i, j;
    int k,l;

    printf("Enter elements for the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements for the 3x3 matrix:\n");
    for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
            printf("Element [%d][%d]: ", k, l);
            scanf("%d", &matrix[k][l]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
            printf("%d ", matrix[k][l]);
        }
        printf("\n");
    }


    return 0;
}