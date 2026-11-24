/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 44
 * Question: Write a program to read, print and addition of two Matrices using pointer and user define functions.
 */

#include <stdio.h>

#define MAX 10

void readMatrix(int *mat, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", (mat + i * cols + j));
        }
    }
}

void printMatrix(int *mat, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d ", *(mat + i * cols + j));
        }
        printf("\n");
    }
}

void addMatrices(int *a, int *b, int *res, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            *(res + i * cols + j) = *(a + i * cols + j) + *(b + i * cols + j);
        }
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], res[MAX][MAX];
    int rows, cols;

    printf("Enter number of rows and columns (e.g. 2 2): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of Matrix A:\n");
    readMatrix((int *)a, rows, cols);

    printf("Enter elements of Matrix B:\n");
    readMatrix((int *)b, rows, cols);

    addMatrices((int *)a, (int *)b, (int *)res, rows, cols);

    printf("\nMatrix A:\n");
    printMatrix((int *)a, rows, cols);

    printf("\nMatrix B:\n");
    printMatrix((int *)b, rows, cols);

    printf("\nResultant Matrix (A + B):\n");
    printMatrix((int *)res, rows, cols);

    return 0;
}
