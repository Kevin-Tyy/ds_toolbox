#include <iostream>
using namespace std;
int main()
{
  int sum, i;
  int a[5] = {10, 20, 30, 40, 50};
  int *p;
  p = a;

  for (sum = *a, p = a + 1; p < a + 5; p++)
  {
    sum += *p;
  }

  cout << sum << endl;
  return 0;
}