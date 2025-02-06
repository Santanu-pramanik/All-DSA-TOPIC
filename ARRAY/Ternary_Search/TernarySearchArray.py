def ternarySearch(left, right, key, arr):
    if right >= left:
        # Find the mid1 and mid2
        mid1 = left + (right - left) // 3
        mid2 = right - (right - left) // 3
        # Check if key is present at array mid
        if arr[mid1] == key:
            return mid1
        if arr[mid2] == key:
            return mid2
        if key < arr[mid1]:
            return ternarySearch(left, mid1 - 1, key, arr)
        elif key > arr[mid2]:
            return ternarySearch(mid2 + 1, right, key, arr)
        else:
            # the key present in between mid1 and mid2
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr)
    return -1


if __name__ == "__main__":
    # Input
    n = int(input("Enter the number of elements in the array: "))
    arr = [int(input()) for _ in range(n)]
    print(f"Enter {n} sorted elements: ")
    key = int(input("Enter the key to be searched: "))
    left = 0
    right = n - 1
    # Search the key using ternary search
    p = ternarySearch(left, right, key, arr)
    # Output the result
    if p == -1:
        print(f"key {key} not found in the array.")
    else:
        print(f"key {key} is found at index {p}")
