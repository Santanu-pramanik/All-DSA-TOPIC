#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Ask user for number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Calculate total elements
    int totalElements = rows * cols;
    cout << "You can enter a total of " << totalElements << " elements." << endl;

    // Create the 2D array
    int arr[rows][cols];

    // Taking user input for elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing the matrix
    cout << "The entered matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
