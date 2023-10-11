#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
  string name;
  int age;
  string country;

public:
  void setName(string n)
  {
    name = n;
  }
  string getName()
  {
    return name;
  }

  void setAge(int a)
  {
    age = a;
  }
  int getAge()
  {
    return age;
  }

  void setCountry(string c)
  {
    country = c;
  }
  string getCountry()
  {
    return country;
  }
};

int main()
{
  Person person1;
  person1.setName("Tuyizere");
  person1.setAge(19);
  person1.setCountry("Rwanda");

  cout << person1.getName() << " is " << person1.getAge() << " years old, He is from" << person1.getCountry() << endl;

  return 0;
}
