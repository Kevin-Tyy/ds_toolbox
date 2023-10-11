#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
  char *name;

public:
  // Person(char newName[30])
  // {
  //   strcpy(name, newName);
  // }
  Person(char *name){
    this->name = name;
  }
  void getDetails()
  {
    cout << "Name is " << name << endl;
  }
};

int main() {
  Person person1("Kevin");
  person1.getDetails();
  return 0;
}
