#include <stdio.h>

int main() {
    int matrix[2][2];
    int matrix2[2][2];
    int i, j;

    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe first 2x2 matrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements for the second matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nThe second 2x2 matrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
