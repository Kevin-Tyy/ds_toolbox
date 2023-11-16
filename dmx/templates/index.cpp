#include <iostream>

using namespace std;

template <typename T, typename U>
auto add(T x, U y)
{
  return x + y;
}

int main()
{
  cout << add(2,4.4);
  return 0;
}