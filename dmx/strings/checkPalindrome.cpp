#include <iostream>
#include <cctype> // For isspace

using namespace std;

bool isPalindromeWithoutBuiltIn(string str)
{
  // Remove spaces and convert to lowercase for case-insensitive comparison
  string cleanedStr;
  for (char c : str)
  {
    if (isspace(c))
    {
      cleanedStr += tolower(c);
    }
  }

  // Compare characters from the beginning and end of the cleaned string
  for (size_t i = 0; i < cleanedStr.length() / 2; ++i)
  {
    if (cleanedStr[i] != cleanedStr[cleanedStr.length() - i - 1])
    {
      return false;
    }
    else{
      return true;
    }
  }

}

int main()
{
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  if (isPalindromeWithoutBuiltIn(input))
  {
    cout << "The string is a palindrome." << endl;
  }
  else
  {
    cout << "The string is not a palindrome." << endl;
  }

  return 0;
}
