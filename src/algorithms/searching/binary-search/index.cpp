#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in the given array arr[l..r] if present,
// otherwise returns -1
int binarySearch(int arr[], int l, int r, int x)
{
  if (r >= l)
  {
    int mid = l + (r - l) / 2;

    // If the element is present at the middle itself
    if (arr[mid] == x)
      return mid;

    // If the element is smaller than mid,
    // then it can only be present in the left subarray
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);

    // Else the element can only be present
    // in the right subarray
    return binarySearch(arr, mid + 1, r, x);
  }

  // We reach here when the element is not present in the array
  return -1;
}

int main(void)
{
  int arr[] = {2, 3, 4, 10, 40};
  int x = 10;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, 0, n - 1, x);
  (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result << endl;
  return 0;
}
