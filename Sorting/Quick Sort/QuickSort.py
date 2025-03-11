def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) - 1]
    left = [x for x in arr[:-1] if x < pivot]
    right = [x for x in arr[:-1] if x >= pivot]
    return quick_sort(left) + [pivot] + quick_sort(right)

if __name__ == "__main__":
    n = int(input("Enter the number of elements: "))
    arr = list(map(int, input(f"Enter {n} elements: ").split()))
    sorted_arr = quick_sort(arr)
    print("Sorted array:", *sorted_arr)
