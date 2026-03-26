#include <stdio.h>
void main(){
    int matrix_add;
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int matrix1[rows][columns];
    int matrix2[rows][columns];
    int sum[rows][columns];
    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("The sum of the two matrices is:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;

    int saddle_point;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int matrix[rows][columns];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < rows; i++){
        int min = matrix[i][0];
        int min_index = 0;
        for(int j = 1; j < columns; j++){
            if(matrix[i][j] < min){
                min = matrix[i][j];
                min_index = j;
            }
        }
        int max = matrix[0][min_index];
        for(int k = 1; k < rows; k++){
            if(matrix[k][min_index] > max){
                max = matrix[k][min_index];
            }
        }
        if(min == max){
            printf("The saddle point is: %d\n", min);
            saddle_point = min;
            break;
        }
    }
    if(saddle_point == 0){
        printf("No saddle point found.\n");
    }
    int inverse[columns][rows];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            inverse[j][i] = matrix[i][j];
        }
    }
    printf("The inverse of the matrix is:\n");
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            printf("%d ", inverse[i][j]);
        }
        printf("\n");
    }
    int magic_square;
    printf("Enter the size of the matrix: ");
    scanf("%d", &rows);
    int magic[rows][rows];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            scanf("%d", &magic[i][j]);
        }
    }
    int sum_diagonal1 = 0;
    int sum_diagonal2 = 0;
    for(int i = 0; i < rows; i++){
        sum_diagonal1 += magic[i][i];
        sum_diagonal2 += magic[i][rows - i - 1];
    }
    if(sum_diagonal1 == sum_diagonal2){
        int sum_row = 0;
        for(int i = 0; i < rows; i++){
            sum_row += magic[i][0];
        }
        if(sum_row == sum_diagonal1){
            int sum_column = 0;
            for(int j = 0; j < rows; j++){
                sum_column += magic[0][j];
            }
            if(sum_column == sum_diagonal1){
                printf("The matrix is a magic square.\n");
                magic_square = 1;
            }
        }
    }
    if(magic_square == 0){
        printf("The matrix is not a magic square.\n");
    }
    int choice;
    printf("Enter your choice:\n1. Matrix Addition\n2. Saddle Point\n3
. Matrix Inverse\n4. Magic Square\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            // Matrix Addition code here
            break;
        case 2:
            // Saddle Point code here
            break;
        case 3:
            // Matrix Inverse code here
            break;
        case 4:
            // Magic Square code here       
            break;
        default:
            printf("Invalid choice.\n");
}