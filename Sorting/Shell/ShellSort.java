import java.util.Scanner;
import java.util.Arrays;

public class ShellSort {
    // Shell Sort function
    public static void shellSort(int[] arr) {
        int n = arr.length;
        
        // Start with a big gap, then reduce the gap
        for (int gap = n / 2; gap > 0; gap /= 2) {
            // Perform a gapped insertion sort
            for (int i = gap; i < n; i++) {
                int temp = arr[i];
                int j = i;
                
                // Shift elements until the correct position for temp is found
                while (j >= gap && arr[j - gap] > temp) {
                    arr[j] = arr[j - gap];
                    j -= gap;
                }
                
                // Place temp at its correct position
                arr[j] = temp;
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Taking input from the user
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt(); 
        
        int[] arr = new int[n];
        System.out.println("Enter " + n + " numbers:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt(); // User inputs numbers
        }
        
        System.out.println("Original Array: " + Arrays.toString(arr));

        // Sorting
        shellSort(arr);

        // Display result
        System.out.println("Sorted Array: " + Arrays.toString(arr));

        scanner.close(); // Close scanner
    }
}
