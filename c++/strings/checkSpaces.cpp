#include <iostream>

using namespace std;

int main()
{
  string name;
  cout << "Enter : ";
  getline(cin, name);

  // Reverse the string
  string reversedString = "";
  for (int i = name.length() - 1; i >= 0; i--)

  {
    reversedString.push_back(name[i]);
  };
  cout << "Reversed string: " << reversedString << endl;
  return 0;
}
