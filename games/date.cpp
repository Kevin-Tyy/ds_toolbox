#include <ctime>
#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
  //print current time
  int n;
  cin >> n;
  
  if(!isdigit(n)){
    cout << "Error: Invalid number";
  }else{
    cout << "Number";
  }

  return 0;
}
