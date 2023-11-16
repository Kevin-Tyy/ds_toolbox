#include <iostream>

using namespace std;

int findMostFrequent(int array[], int size)
{
  int currentElement = array[0];
  int currentFrequency = 1;
  int currentMaxFrequency = 1;
  int mostFrequent = array[0];

  for (int i = 1; i < size; i++)
  {
    if (currentElement == array[i])
    {
      ++currentFrequency;
    }
    else
    {
      if (currentFrequency > currentMaxFrequency)
      {
        mostFrequent = currentElement;
        currentMaxFrequency = currentFrequency; // Update the currentMaxFrequency
      }
      currentElement = array[i];
      currentFrequency = 1;
    }
  }
  if (currentFrequency > currentMaxFrequency)
  {
    mostFrequent = currentElement;
  }
  return mostFrequent;
}

int main()
{
  int array[5] = {4, 4, 3, 2, 4};
  int size = sizeof(array) / sizeof(int);
  cout << "Most frequent is: " << findMostFrequent(array, 5) << endl;
  return 0;
}