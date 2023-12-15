#include <iostream>

// Function to insert a new element into an array
void insertElement(int arr[], int &size, int position, int newValue)
{
  // Check if the position is valid
  if (position < 0 || position > size)
  {
    std::cout << "Invalid position for insertion." << std::endl;
    return;
  }

  // Shift elements to the right to make space for the new element
  for (int i = size; i > position; i--)
  {
    arr[i] = arr[i - 1];
  }

  // Insert the new element at the specified position
  arr[position] = newValue;

  // Increase the size of the array
  size++;

}

int main()
{
  const int maxSize = 100; // Assuming a maximum array size
  int arr[maxSize] = {1, 2, 3, 4, 5};
  int size = 5;

  // Display the original array
  std::cout << "Original Array: ";
  for (int i = 0; i < size; ++i)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  // Insert a new element (e.g., 10) at position 2
  insertElement(arr, size, 2, 10);

  // Display the modified array
  std::cout << "Modified Array: ";
  for (int i = 0; i < size; ++i)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
