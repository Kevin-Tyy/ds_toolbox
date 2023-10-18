#include <iostream>

using namespace std;

void quadratic(int n)
{
  int s = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      s += 1;
      cout << "i= " << i << ", j= " << j << ", We are on step" << s << endl;
    }
  }
}

int doubleIteration(int n)
{
  int i = 1, ns = 0;
  while (i < n)
  {
    ns += 1;
    i *= 2;
  }
  return ns;
}
int main()
{
  int number = 10;
  // quadratic(10);

  cout << "The number of double iterations is: " << doubleIteration(10) << endl;
}