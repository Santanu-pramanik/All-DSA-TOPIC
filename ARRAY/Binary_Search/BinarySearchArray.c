#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        // Check if x is present at mid
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &x);
    
    int result = binarySearch(arr, n, x);
    if (result == -1) {
        printf("Element is not found in this array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }
    
    return 0;
}
