#include <iostream>
using namespace std;

void reverseArray(int arr[], int length) {
    int reversedArray[length];
    
    for (int i = 0; i < length; i++) {
        reversedArray[i] = arr[length - 1 - i];
    }

    cout << "Original array" << endl;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Reversed array: " << endl;
    for (int i = 0; i < length; i++) {
        cout << reversedArray[i] << " ";
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(int);

    reverseArray(arr, length);

    return 0;
}
