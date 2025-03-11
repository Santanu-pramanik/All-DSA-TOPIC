#include <iostream>
using namespace std;

void multiplyMatrices(int m, int n, int p, int A[][100], int B[][100], int C[][100]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n, p;
    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;
    cout << "Enter columns of second matrix: ";
    cin >> p;

    int A[100][100], B[100][100], C[100][100];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            cin >> B[i][j];

    multiplyMatrices(m, n, p, A, B, C);

    cout << "Resultant Matrix:\n";
    displayMatrix(m, p, C);
    return 0;
}
