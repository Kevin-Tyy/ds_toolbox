def find_index(array, key):
    for i, element in enumerate(array):
        if element == key:
            return i

    # If the key is not found, return -1 to indicate that.
    return -1

array = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
key = 4

index = find_index(array, key)
if index != -1:
    print("The element is at index:", index)
else:
    print("Element not found in the array.")