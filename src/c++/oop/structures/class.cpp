#include <iostream>

using namespace std;

class Student
{
public:
  string name;
  int age;
  string school;

  // default constructor
  Student(){};

  // explicit constructor for Student class
  Student(string n, int a, string sch)
  {
    name = n;
    age = a;
    school = sch;
  }

  void print()
  {
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "school: " << school << endl
         << endl;
  }
};

int main()
{
  Student s1("Johnny", 12, "RCA");
  Student s2{"Bob", 11, "Havard"};
  Student *s3 = new Student("Mark", 14, "Oxford");

  s1.print();
  s2.print();
  s3->print();

  return 0;
}