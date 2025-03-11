def search(arr, N, x):
    for i in range(N):
        if arr[i] == x:
            return i  # Return if element is found
    return -1  # Return -1 if element is not found

if __name__ == "__main__":
    N = int(input("Enter the size of the array: "))
    # Declare the array
    arr = [int(input()) for _ in range(N)]
    # Input the target value to search
    x = int(input("Enter the target element to Search :"))
    # Function call
    result = search(arr, N, x)
    # Output the result
    if result == -1:
        print("Element is not present in array")
    else:
        print(f"Element search in {result} index")
