#include <iostream>
#include <cmath>

int main()
{
  // Coefficients of the quadratic equation
  double a, b, c;

  // Get user input
  std::cout << "Enter coefficient a: ";
  std::cin >> a;

  std::cout << "Enter coefficient b: ";
  std::cin >> b;

  std::cout << "Enter coefficient c: ";
  std::cin >> c;

  // Calculate the discriminant
  double discriminant = b * b - 4 * a * c;

  // Check the nature of roots
  if (discriminant > 0)
  {
    // Two real and distinct roots
    double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
    double root2 = (-b - std::sqrt(discriminant)) / (2 * a);

    std::cout << "Root 1: " << root1 << std::endl;
    std::cout << "Root 2: " << root2 << std::endl;
  }
  else if (discriminant == 0)
  {
    // One real root (repeated)
    double root = -b / (2 * a);
    std::cout << "Root: " << root << std::endl;
  }
  else
  {
    // Complex roots
    double realPart = -b / (2 * a);
    double imaginaryPart = std::sqrt(-discriminant) / (2 * a);

    std::cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << std::endl;
    std::cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << std::endl;
  }

  return 0;
}
