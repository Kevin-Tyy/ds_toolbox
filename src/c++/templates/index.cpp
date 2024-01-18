#include <iostream>
using namespace std;

template <typename T, typename U, typename Z>
auto add(T x, U y, Z z)
{
  return x + y + z;
}
int main() 
{
  cout << add<int, float, double>(2, 4.4, 3);
  return 0;
}