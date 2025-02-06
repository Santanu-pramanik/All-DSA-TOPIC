#include <iostream>
using namespace std;

class BinarySearchArray {
public:
    int binarySearch(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                return mid;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " sorted elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search for: ";
    cin >> x;
    
    BinarySearchArray ob;
    int result = ob.binarySearch(arr, n, x);
    
    if (result == -1) {
        cout << "Element is not found in this array" << endl;
    } else {
        cout << "Element is present at index " << result << endl;
    }
    
    return 0;
}
