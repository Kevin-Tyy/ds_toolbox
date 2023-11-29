#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
  int radius, circumference, area;
  float pi = 3.14;

public:
  Circle(int r, int c)
  {
    radius = r;
    circumference = c;
  };
  float findArea()
  {
    return pow(radius, 2) * pi;
  }
  float findCircumference()
  {
    return 2 * radius * pi;
  }
};

int main()
{
  Circle circle(3, 4);
  cout << "The area of the circle is: " << circle.findArea() << endl;
  cout << "The cirmference is: " << circle.findCircumference() << endl;

  return 0;
}
