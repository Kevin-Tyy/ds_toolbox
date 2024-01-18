#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> nums;

  for (int i = 0; i < 5; i++)
  {
    nums.push_back(50);
  }

  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << endl;
  }

  cout << "Max size: " << nums.max_size();

  return 0;
}
