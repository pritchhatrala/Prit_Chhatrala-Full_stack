#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols) {
    printf("------------Matrix: 1------------:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter elements : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }
    
    // matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols) {
    printf("\n-------------Result : multiplication matrix------------ :\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;
    char choice;

    do {
        // Input the first matrix
        printf("Enter the number of rows for the first matrix: ");
        scanf("%d", &rows1);
        printf("Enter the number of columns for the first matrix: ");
        scanf("%d", &cols1);

        // Input the second matrix
        printf("\nEnter the number of rows for the second matrix: ");
        scanf("%d", &rows2);
        printf("Enter the number of columns for the second matrix: ");
        scanf("%d", &cols2);

        if (cols1 != rows2) {
            printf("Matrix multiplication is not possible. The number of columns in the first matrix must equal the number of rows in the second matrix.\n");
            continue;  
        }

        // Input the matrices
        inputMatrix(matrix1, rows1, cols1);
        inputMatrix(matrix2, rows2, cols2);

        // Perform matrix multiplication
        multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

        // Display the result
        displayMatrix(result, rows1, cols2);

        

    } while (choice == 'y' || choice == 'Y');

    printf("Program finished.\n");
    
}
