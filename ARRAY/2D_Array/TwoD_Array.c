#include <stdio.h>

int main() {
    int rows, cols;

    // Ask user for number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Calculate total elements
    int totalElements = rows * cols;
    printf("You can enter a total of %d elements.\n", totalElements);

    // Create the 2D array
    int arr[rows][cols];

    // Taking user input for elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing the matrix
    printf("The entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
