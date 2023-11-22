#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 4, 6, 2, 1, 4, 8, 0, 9, -1};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Unsorted array" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  for (int i = 0; i < n - 1; i++)
  {
    int targetIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[targetIndex])
      {
        targetIndex = j;
      }
    }
    swap(arr[i], arr[targetIndex]);
  }

  cout << "\nUnsorted array" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}