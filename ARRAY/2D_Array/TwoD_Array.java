import java.util.Scanner;

public class TwoD_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Asking the user for rows and columns
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int cols = sc.nextInt();

        // Creating a 2D array with user-defined size
        int[][] arr = new int[rows][cols];
        int TotalNumber=rows*cols;

        // Taking user input for array elements
        System.out.println("You can Enter "+TotalNumber+" number of the matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        // Printing the matrix
        System.out.println("The entered matrix is:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
