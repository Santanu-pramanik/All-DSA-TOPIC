#include <stdio.h>

void multiplyMatrices(int m, int n, int p, int A[m][n], int B[n][p], int C[m][p]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter columns of second matrix: ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    multiplyMatrices(m, n, p, A, B, C);

    printf("Resultant Matrix:\n");
    displayMatrix(m, p, C);
    return 0;
}
