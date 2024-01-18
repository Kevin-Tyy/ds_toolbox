#include <iostream>

using namespace std;

int operate()
{
  return 1;
};

int operate(int a)
{
  return 2;
};

int main(){
  cout << ::operate(2);
  return 0;
}