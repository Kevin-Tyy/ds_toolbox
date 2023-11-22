#include <iostream>

int main()
{
  int arr[5] = {50, 40, 20, 30, 10};

  int n = sizeof(arr) / sizeof(arr[0]);
  int temp;
  int counter = 0;

  std::cout << "Array before sorting: " << std::endl;
  for (int i = 0; i < n; i++)
  {
    std::cout << arr[i] << " ";
  }

  for (int i = 0; i < n - 1; i++)
  {
    int check = 0;
    std::cout << "Iteration:  " << i << std::endl;
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {

        // temp = arr[j];
        // arr[j] = arr[j + 1];
        // arr[j + 1] = temp;
        std::swap(arr[j], arr[j + 1]);
        check = 1;
      }
      counter++;
    }
  }
  std::cout
      << "Sorted Arrays" << std::endl;
  for (int i = 0; i < n; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl
            << "Complexity is: " << counter;
  return 0;
}