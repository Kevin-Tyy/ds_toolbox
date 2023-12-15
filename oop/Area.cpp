#include <iostream>
using namespace std;
class Rectangle
{
private:
  int width, length;

  // explicit constructor
  // public:
  //   Rectangle(int w, int l)
  //   {
  //     width = w;
  //     length = l;
  //   };

  // another way to create an explicit constructor
public:
  Rectangle(int w, int l) : width(w), length(l) {}

public:
  int findArea()
  {
    return width * length;
  };
  int setValues(int a, int b)
  {
    width = a;
    length = b;
  };
  int perimeter() {}
};

int Rectangle::perimeter()
{
  return 2 * (width + length);
};

// Rectangle::findPerimeter()
// {
//   return 2 * (width + length);
// }

int main()
{

  // Rectangle recta; -- this reproduces a bug if the constructor is parameterized

  // recta.setValues(40, 3);
  // cout << "The area is: " << recta.findArea();

  // using pointers and default constructor -- this reproduces a bug if the constructor is parameterized

  // Rectangle *rectb = new Rectangle();
  // rectb->setValues(10, 20);
  // cout << "The area is: " << rectb->findArea();

  // using the explicit constructor -- called uniform initialization

  Rectangle recta(10, 20);
  cout << "The area 1 is: " << recta.findArea() << endl;

  // using the explicit constructor and pointers

  Rectangle *rectb = new Rectangle(30, 21);
  cout << "The area 2 is: " << rectb->findArea() << endl;

  // another wierd way using curry braces to pass arguments in the constructor -- called functional form

  Rectangle rectc{15, 39};
  cout << "The area 3 is: " << rectc.findArea() << endl;

  Rectangle rectd = {12, 23};
  cout << "The area 4 is: " << rectd.findArea() << endl;

  // using the dot method to access data members from an object initialized with pointers

  Rectangle *recte = new Rectangle(34, 12);
  cout << "The area 5 is:" << (*recte).findArea() << endl;

  // research for more methods to initialize an object from a class from an explicit constructor
}