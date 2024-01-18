#include <iostream>
using namespace std;

int main () {
  int arr[] = {1,1,1,1,1,1,1,1};
  int sum = *arr;
  for(int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++){
    sum += *(arr + i);
  }
  cout << sum << endl;
  
  return 0;
}