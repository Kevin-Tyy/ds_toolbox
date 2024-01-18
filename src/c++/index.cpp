#include <iostream>
using namespace std;
int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  int position = 2;
  int size = 5;
  int lastIndex = size - 1;
  int element = 15;
  while (lastIndex >= position)
  {
    arr[lastIndex + 1] = arr[lastIndex];
    lastIndex--;
  }
  arr[position] = element;
  for (int i = 0; i < size + 1; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}