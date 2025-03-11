#include <iostream>
using namespace std;

class TernarySearchArray {
public:
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
};

int main() {
    int n, key;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " sorted elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key to be searched: ";
    cin >> key;
    
    int left = 0;
    int right = n - 1;
    TernarySearchArray ob;
    int p = ob.ternarySearch(left, right, key, arr);
    
    if (p == -1) {
        cout << "Key " << key << " not found in the array." << endl;
    } else {
        cout << "Key " << key << " is found at index " << p << endl;
    }
    
    return 0;
}