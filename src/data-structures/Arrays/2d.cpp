#include <iostream>
using namespace std;
int main()
{
  cout << endl;
  cout << endl;

  cout << "FIRST OPTION" << endl;
  
  int array[2][7] = {1, 2, 3, 13, 17, 34, 19, 54, 23, 11, 45, 31, 65, 26};
  int array2[2][7] = {
      {1, 2, 3, 13, 17, 34, 19},
      {54, 23, 11, 45, 31, 65, 26}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      cout << array[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
  cout << endl;

  cout << "SECOND OPTION" << endl;
  
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      cout << array2[i][j] << "\t";
    }
    cout << endl;
  }
  return 0;
}