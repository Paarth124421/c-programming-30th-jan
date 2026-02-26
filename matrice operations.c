#include <stdio.h>
int main(){
    int matrix[3][3];
    int matrix2[3][3];
    int i, j;
    int choice;

    printf("MAIN MENU\n");
    printf("1. Add two matrices\n");
    printf("2. find saddle point of two matrices\n");
    printf("3. inverse of two matrices\n");
    printf("4. magic square of two matrices\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
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
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }

        printf("\nThe 3x3 matrix is:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matrix2[i][j]);
            }
            printf("\n");
        }
    }
    switch (choice) {
        case 1:
        printf("Sum of matrices:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matrix[i][j] + matrix2[i][j]);
            }
            printf("\n");
        }
        break;

        case 2:
        int min=0, max=0;
        printf("saddle point of matrices:\n");
        for (i = 0; i < 3; i++) {   
            min=matrix[i][0];
            for (j = 0; j < 3; j++) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
        }      
        for (i = 0; i < 3; i++) {
            max=matrix[i][0];
            for (j = 0; j < 3; j++) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
        }
        if (min == max) {
            printf("The saddle point is: %d\n", min);
        } else {
            printf("No saddle point found.\n");
        }
        break;
        case 3:
        printf("inverse of matrices:\n");
        float determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                            matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                            matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
        if (determinant == 0) {
            printf("The matrix is singular and cannot be inverted.\n");
        } else {
            printf("Inverse of the first matrix:\n");
            printf("%f %f %f\n", (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) / determinant,
                   (matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]) / determinant,
                   (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) / determinant);
            printf("%f %f %f\n", (matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]) / determinant,
                   (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) / determinant,
                   (matrix[0][2] * matrix[1][0] - matrix[0][0] * matrix[1   ][2]) / determinant);
            printf("%f %f %f\n", (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) / determinant,
                   (matrix[0][1] * matrix[2][0] - matrix[0][0] * matrix[2][1]) / determinant,
                   (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) / determinant);
        }
        break;                       
                    

    }



    return 0;
}