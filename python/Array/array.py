#dsa array theorys

# Bubble sort algorithm
arr = [10, 15, 89, 90, 5]
n = len(arr)

for i in range(n - 1):
    for j in range(n - 1 - i):
        if arr[j] > arr[j + 1]:
            # Swap adjacent elements if they are in wrong order
            arr[j], arr[j + 1] = arr[j + 1], arr[j]


#selection sort
for i in range(n - 1):
    min_index = i
    for j in range(i + 1, n):
        if arr[j] < arr[min_index]:
            min_index = j
    # Swap the minimum element with the current position
    arr[i], arr[min_index] = arr[min_index], arr[i]
            

# Insertion sort algorithm
for i in range(1, n):
    key = arr[i]
    j = i - 1
    # Move elements greater than key one position ahead
    while j >= 0 and arr[j] > key:
        arr[j + 1] = arr[j]
        j -= 1
    # Insert the key at its correct position
    arr[j + 1] = key


# Quick Sort implementation and demo
def quicksort(arr):
    """In-place Quick Sort (Lomuto partition). Returns the sorted list."""
    def partition(a, low, high):
        pivot = a[high]
        i = low - 1
        for j in range(low, high):
            if a[j] <= pivot:
                i += 1
                a[i], a[j] = a[j], a[i]
        a[i + 1], a[high] = a[high], a[i + 1]
        return i + 1

    def _quicksort(a, low, high):
        if low < high:
            p = partition(a, low, high)
            _quicksort(a, low, p - 1)
            _quicksort(a, p + 1, high)

    _quicksort(arr, 0, len(arr) - 1)
    return arr


# bainary search
def binary_search(arr, target):
    start = 0
    end = len(arr) -1
    
    while start <= end:
        mid = start + (end - start) // 2
    
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            start = mid + 1
        else:
            end = mid - 1
    return -1

output = binary_search([-1, 0, 3, 4, 5, 9, 12], 12)  # Output: 6
print(output)





















#dsa questions

#leetcode 1 question Two sum
nums = [2, 11, 7, 15]
target = 9

size = len(nums)

for i in range(0, size):
    for j in range(i + 1, size):
        if(nums[i] + nums[j] == target ):
            print(i, j)




