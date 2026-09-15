#include <stdio.h>
#include <stdlib.h>

// Q71: Read and print a matrix
void Q71() {
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

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
        free(matrix[i]);
    free(matrix);
}

// Q72: Find the sum of all elements in a matrix
void Q72() {
    int rows, cols, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int **matrix = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
        matrix[i] = malloc(cols * sizeof(int));

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    for (int i = 0; i < rows; i++)
        free(matrix[i]);
    free(matrix);
}

int main() {
    int choice;

    printf("Day 36 - 2D Arrays\n");
    printf("1. Q71 - Read and Print a Matrix\n");
    printf("2. Q72 - Sum of All Elements in a Matrix\n");
    printf("Enter question number: ");
    scanf("%d", &choice);

    if (choice == 1)
        Q71();
    else if (choice == 2)
        Q72();
    else
        printf("Invalid choice.\n");

    return 0;
}
