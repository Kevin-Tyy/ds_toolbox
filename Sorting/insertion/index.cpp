#include <iostream>

using namespace std;

int main()
{
  int arr[] = {12, 3, 5, 6, 15, 7, 8};

  int i, key, j;
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Unsorted array" << endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;

    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }

  cout << endl
       << "Sorted array" << endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}