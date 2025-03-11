class HeapSort:
    def __init__(self, arr):
        self.arr = arr
        self.n = len(arr)

    def heapify(self, n, i):
        largest = i  # Root
        left = 2 * i + 1  # Left child index
        right = 2 * i + 2  # Right child index

        # Check if left child exists and is greater than root
        if left < n and self.arr[left] > self.arr[largest]:
            largest = left

        # Check if right child exists and is greater than largest so far
        if right < n and self.arr[right] > self.arr[largest]:
            largest = right

        # If largest is not root, swap and continue heapifying
        if largest != i:
            self.arr[i], self.arr[largest] = self.arr[largest], self.arr[i]
            self.heapify(n, largest)

    def sort(self):
        # Build a max heap
        for i in range(self.n // 2 - 1, -1, -1):
            self.heapify(self.n, i)

        # Extract elements from the heap one by one
        for i in range(self.n - 1, 0, -1):
            self.arr[i], self.arr[0] = self.arr[0], self.arr[i]  # Swap max with last element
            self.heapify(i, 0)  # Heapify the reduced heap

    def get_sorted_array(self):
        return self.arr


# User input
user_input = input("Enter numbers separated by spaces: ")
arr = list(map(int, user_input.split()))  # Convert input to list of integers

# Sorting process
heap_sorter = HeapSort(arr)
heap_sorter.sort()

# Display result
print("Sorted array:", heap_sorter.get_sorted_array())
