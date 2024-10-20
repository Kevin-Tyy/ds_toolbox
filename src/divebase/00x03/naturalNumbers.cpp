#include <iostream>

namespace calculations
{
  int calculateDifference(int num)
  {
    int sumOfSquares = 0;
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
      sumOfSquares += i * i;
      sum += i;
    }
    int squareOfSum = sum * sum;
    int difference = squareOfSum - sumOfSquares;
    return difference;
  }
}

int main()
{
  int limit;
  std::cout << "Enter a positive integer N: ";
  std::cin >> limit;
  std::cout << "The difference between the square of the sum and the sum of squares of the first " << limit << " natural numbers is: " << calculations::calculateDifference(limit) << std::endl;

  return 0;
}
