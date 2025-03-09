# User-defined function for Bubble Sort
def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        swapped = False
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                # Swap arr[j] and arr[j+1]
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        # If no swapping happened, array is already sorted
        if not swapped:
            break

# User-defined function to print an array
def print_array(arr):
    print(" ".join(map(str, arr)))

# Taking input from user
n = int(input("Enter the number of elements: "))
arr = list(map(int, input(f"Enter {n} elements: ").split()))

# Ensure the correct number of elements are entered
while len(arr) != n:
    print(f"Error: You must enter exactly {n} elements. Try again.")
    arr = list(map(int, input(f"Enter {n} elements: ").split()))

print("Unsorted array:")
print_array(arr)

# Calling the user-defined function for Bubble Sort
bubble_sort(arr)

print("Sorted array:")
print_array(arr)
