#include <iostream>
#include <vector>

using namespace std;

// Function to perform Shell Sort
void shellSort(vector<int>& arr) {
    int n = arr.size();
    
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

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Taking user input
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // User inputs numbers
    }

    cout << "Original Array: ";
    printArray(arr);

    // Sorting the array
    shellSort(arr);

    cout << "Sorted Array: ";
    printArray(arr);

    return 0;
}
