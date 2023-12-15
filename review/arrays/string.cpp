#include <iostream>
using namespace std;

int main()
{
  int ROWS;
  int COLS;
  
  cin >> ROWS >> COLS;
  int A[ROWS][COLS]{};
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      cin >> A[i][j] ;
    }
  }

  for (int i = 0; i < ROWS; i++)
  {
    cout << "[";
    for (int j = 0; j < COLS; j++)
    {
      cout << A[i][j] << " ";
    }
    cout << "]" << endl;
  }
 

}