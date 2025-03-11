#include <stdio.h>

int search(int arr[], int N, int x) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == x)
            return i; // Return if element is found
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    
    // Declare the array
    int arr[N];
    
    // Input array elements
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the target value to search
    int x;
    printf("Enter the target element to Search: ");
    scanf("%d", &x);
    
    // Function call
    int result = search(arr, N, x);
    
    // Output the result
    if (result == -1) {
        printf("Element is not present in array\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    
    return 0;
}
