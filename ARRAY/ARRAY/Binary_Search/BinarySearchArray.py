class BinarySearchArray:
    def binarySearch(self, arr, x):
        low = 0
        high = len(arr) - 1
        while low <= high:
            mid = low + (high - low) // 2
            # Check if x is present at mid
            if arr[mid] == x:
                return mid
            elif arr[mid] < x:
                low = mid + 1
            else:
                high = mid - 1
        return -1

if __name__ == "__main__":
    n = int(input("Enter the number of element in the array: "))
    arr = [int(input()) for _ in range(n)]
    print(f"Enter {n} Sorted elements: ")
    x = int(input("Enter the element to search for :"))
    ob = BinarySearchArray()
    result = ob.binarySearch(arr, x)
    if result == -1:
        print("Element is not found in this array")
    else:
        print(f"Element is present at index {result}")
