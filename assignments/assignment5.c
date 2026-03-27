#include <stdio.h>

int matrix_add() {
        int rows, cols;
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        printf("Enter the number of columns: ");
        scanf("%d", &cols); 
        int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
        printf("Enter the elements of the first matrix:\n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                scanf("%d", &matrix1[i][j]);    
            }
        }
        printf("Enter the elements of the second matrix:\n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                scanf("%d", &matrix2[i][j]);    
            }
        }
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        printf("Result of matrix addition:\n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                printf("%d ", result[i][j]);    
            }
            printf("\n");
        }
            return 0;
    }
    
    int saddle_point(){
        int rows, cols;
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        printf("Enter the number of columns: ");
        scanf("%d", &cols); 
        int matrix[rows][cols];
        printf("Enter the elements of the matrix:\n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                scanf("%d", &matrix[i][j]);    
            }
        }
        for(int i = 0; i < rows; i++){
            int min_row = matrix[i][0], min_col_index = 0;
            for(int j = 1; j < cols; j++){
                if(matrix[i][j] < min_row){
                    min_row = matrix[i][j];
                    min_col_index = j;
                }
            }
            int max_col = matrix[0][min_col_index];
            for(int k = 1; k < rows; k++){
                if(matrix[k][min_col_index] > max_col){
                    max_col = matrix[k][min_col_index];
                }
            }
            if(min_row == max_col){
                printf("Saddle point found at (%d, %d): %d\n", i, min_col_index, min_row);
                return 0;
            }
        }
        printf("No saddle point found.\n");
            return 0;
    }
    
    int inverse_matrix(){
        int rows, cols;
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        printf("Enter the number of columns: ");
        scanf("%d", &cols); 
        if(rows != cols){
            printf("Inverse is not possible for non-square matrices.\n");
            return 0;
        }
        int matrix[rows][cols], inverse[rows][cols];
        printf("Enter the elements of the matrix:\n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                scanf("%d", &matrix[i][j]);    
            }
        }
        // Initialize inverse matrix to identity
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                inverse[i][j] = (i == j) ? 1 : 0;
            }
        }
        // Perform Gaussian elimination
        for(int i = 0; i < rows; i++){
            if(matrix[i][i] == 0){
                printf("Matrix is singular, inverse does not exist.\n");
                return 0;
            }
            for(int j = 0; j < rows; j++){
                if(i != j){
                    int factor = matrix[j][i] / matrix[i][i];
                    for(int k = 0; k < cols; k++){
                        matrix[j][k] -= factor * matrix[i][k];
                        inverse[j][k] -= factor * inverse[i][k];
                    }
                }
            }
        }
        // Normalize the diagonal elements to 1
        for(int i = 0; i < rows; i++){
            int factor = matrix[i][i];
            for(int j = 0; j < cols; j++){
                matrix[i][j] /= factor;
                inverse[i][j] /= factor;
            }
        }
        printf("Inverse of the matrix:\n");
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                printf("%d ", inverse[i][j]);    
            }
            printf("\n");
        }
            return 0;
    }
    
    int magic_square(){
        int n;
        printf("Enter the size of the magic square (odd number): ");
        scanf("%d", &n);
        if(n % 2 == 0){
            printf("Magic square is only possible for odd numbers.\n");
            return 0;
        }
        int magic_square[n][n];
        int num = 1, i = 0, j = n / 2;
        while(num <= n * n){
            magic_square[i][j] = num++;
            int new_i = (i - 1 + n) % n;
            int new_j = (j + 1) % n;
            if(magic_square[new_i][new_j] != 0){
                i++;
            } else {
                i = new_i;
                j = new_j;
            }
        }
        printf("Magic Square of size %d:\n", n);
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                printf("%d ", magic_square[i][j]);    
            }
            printf("\n");
        }
        return 0;
}

int main(){
    int choice;
    printf("make a choice:\n");
    printf("1. Matrix Addition\n2. Saddle Point\n3. Inverse of a Matrix\n4. Magic Square\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            matrix_add();
            break;
        case 2:
            saddle_point();
            break;
        case 3:
            inverse_matrix();
            break;
        case 4:
            magic_square();
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}