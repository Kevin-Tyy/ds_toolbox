#include <bits/stdc++.h>

using namespace std;
void reverseArray(int arr[], int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        // Swap the elements at the start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the start and end positions towards each other
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original Array: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Reverse the array
    reverseArray(arr, length);

    // Display the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
