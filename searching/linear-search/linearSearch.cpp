#include <iostream>

int findIndex(int a[], int key, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] == key)
    {
      return i;
    }
  }
  // If the key is not found, you can return -1 to indicate that.
  return -1;
}

int main()
{
  int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int length = sizeof(array) / sizeof(array[0]); // Calculate the length of the array
  int key = 4;
  
  int index = findIndex(array, key, length);
  if (index != -1)
  {
    std::cout << "The element is at index: " << index << std::endl;
  }
  else
  {
    std::cout << "Element not found in the array." << std::endl;
  }

  return 0;
}