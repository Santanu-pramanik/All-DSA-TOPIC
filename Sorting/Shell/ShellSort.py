def shell_sort(arr):
    n = len(arr)
    gap = n // 2  # Start with a big gap, then reduce it
    
    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i

            # Shift elements until the correct position for temp is found
            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap

            arr[j] = temp  # Place temp at its correct position
        
        gap //= 2  # Reduce the gap

# Taking user input
arr = list(map(int, input("Enter numbers separated by spaces: ").split()))

print("Original Array:", arr)

# Sorting
shell_sort(arr)

# Display result
print("Sorted Array:", arr)
