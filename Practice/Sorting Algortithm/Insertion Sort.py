# Insertion Sort Algorithm Implementation in Python

def insertion_sort(arr):
    # Start from index 1 (index 0 is already considered sorted)
    for i in range(1, len(arr)):
        temp = arr[i]
        j = i - 1

        # Move elements of arr[0..i-1] that are greater than temp
        # to one position ahead of their current position
        while j >= 0 and arr[j] > temp:
            arr[j + 1] = arr[j]  # Shift element to the right
            j -= 1

        # Place temp in its correct position
        arr[j + 1] = temp


# Example usage:
numbers = [5, 2, 4, 6, 1, 3]
insertion_sort(numbers)
print(numbers)  # Output: [1, 2, 3, 4, 5, 6]