#include <iostream>
using namespace std;

class LinearSearchArray {
public:
    int search(int arr[], int N, int x) {
        for (int i = 0; i < N; i++) {
            if (arr[i] == x)
                return i; // Return if element is found
        }
        return -1; // Return -1 if element is not found
    }
};

int main() {
    int N, x;
    cout << "Enter the size of the array: ";
    cin >> N;
    int arr[N];
    cout << "Enter " << N << " elements: " << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target element to search: ";
    cin >> x;
    
    LinearSearchArray ob;
    int result = ob.search(arr, N, x);
    
    if (result == -1) {
        cout << "Element is not present in array" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    
    return 0;
}