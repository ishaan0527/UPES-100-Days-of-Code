#include <stdio.h>
#include <stdlib.h>

// Q73: Find the sum of each row of a matrix and store it in an array
void Q73() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int **matrix = malloc(rows * sizeof(int *));
    int *rowSum = calloc(rows, sizeof(int));

    for (int i = 0; i < rows; i++)
        matrix[i] = malloc(cols * sizeof(int));

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Sum of each row: ");
    for (int i = 0; i < rows; i++)
        printf("%d ", rowSum[i]);

    printf("\n");

    for (int i = 0; i < rows; i++)
        free(matrix[i]);
    free(matrix);
    free(rowSum);
}

// Q74: Find the transpose of a matrix
void Q74() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int **matrix = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
        matrix[i] = malloc(cols * sizeof(int));

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Transpose of matrix:\n");
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
        free(matrix[i]);
    free(matrix);
}

int main() {
    int choice;

    printf("Day 37 - 2D Arrays\n");
    printf("1. Q73 - Row Sums of a Matrix\n");
    printf("2. Q74 - Transpose of a Matrix\n");
    printf("Enter question number: ");
    scanf("%d", &choice);

    if (choice == 1)
        Q73();
    else if (choice == 2)
        Q74();
    else
        printf("Invalid choice.\n");

    return 0;
}
