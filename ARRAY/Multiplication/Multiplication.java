import java.util.Scanner;

public class Multiplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input matrix dimensions
        System.out.print("Enter rows and columns of first matrix: ");
        int m = sc.nextInt(), n = sc.nextInt();
        System.out.print("Enter columns of second matrix: ");
        int p = sc.nextInt();

        // Validate dimensions
        if (m <= 0 || n <= 0 || p <= 0) {
            System.out.println("Matrix dimensions must be positive integers!");
            return;
        }

        // Initialize matrices
        int[][] A = new int[m][n];
        int[][] B = new int[n][p];
        int[][] C = new int[m][p];

        // Input matrices
        System.out.println("Enter elements of first matrix:");
        inputMatrix(sc, A);
        System.out.println("Enter elements of second matrix:");
        inputMatrix(sc, B);

        // Multiply matrices
        multiplyMatrices(A, B, C);

        // Display result
        System.out.println("Resultant Matrix:");
        displayMatrix(C);

        sc.close();
    }

    // Function to input matrix
    static void inputMatrix(Scanner sc, int[][] matrix) {
        for (int i = 0; i < matrix.length; i++)
            for (int j = 0; j < matrix[0].length; j++)
                matrix[i][j] = sc.nextInt();
    }

    // Function to multiply matrices
    static void multiplyMatrices(int[][] A, int[][] B, int[][] C) {
        int m = A.length, n = A[0].length, p = B[0].length;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                C[i][j] = 0;
                for (int k = 0; k < n; k++)
                    C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Function to display matrix
    static void displayMatrix(int[][] matrix) {
        for (int[] row : matrix) {
            for (int val : row)
                System.out.print(val + " ");
            System.out.println();
        }
    }
}


