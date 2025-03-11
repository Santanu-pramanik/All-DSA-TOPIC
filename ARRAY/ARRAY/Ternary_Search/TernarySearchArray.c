#include <stdio.h>

int ternarySearch(int left, int right, int key, int arr[]) {
    if (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        
        if (arr[mid1] == key) {
            return mid1;
        }
        if (arr[mid2] == key) {
            return mid2;
        }
        if (key < arr[mid1]) {
            return ternarySearch(left, mid1 - 1, key, arr);
        } else if (key > arr[mid2]) {
            return ternarySearch(mid2 + 1, right, key, arr);
        } else {
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr);
        }
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    
    int left = 0;
    int right = n - 1;
    int p = ternarySearch(left, right, key, arr);
    
    if (p == -1) {
        printf("Key %d not found in the array.\n", key);
    } else {
        printf("Key %d is found at index %d.\n", key, p);
    }
    
    return 0;
}