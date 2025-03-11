#include <iostream>
using namespace std;

// User-defined function for Bubble Sort
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no swapping happened, array is already sorted
        if (!swapped) break;
    }
}

// User-defined function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unsorted array:\n";
    printArray(arr, n);

    // Calling user-defined function for Bubble Sort
    bubbleSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}
