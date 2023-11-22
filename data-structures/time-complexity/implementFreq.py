def find_most_frequent(array, size):
    current_element = array[0]
    current_frequency = 1
    current_max_frequency = 1
    most_frequent = current_element

    for i in range(1, size):
        if current_element == array[i]:
            current_frequency += 1
        else:
            if current_frequency > current_max_frequency:
                most_frequent = current_element
                current_max_frequency = current_frequency  # Update the currentMaxFrequency

            current_element = array[i]
            current_frequency = 1

    if current_frequency > current_max_frequency:
        most_frequent = current_element

    return most_frequent

if __name__ == "__main__":
    array = [4, 4, 3, 2, 4]
    size = len(array)
    most_frequent_element = find_most_frequent(array, size)
    print("Most frequent element:", most_frequent_element)
