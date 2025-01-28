#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int
  removeDuplicates (vector<int> &nums)
  {
    // 1 element -> return
    if (nums.size () < 2)
      {
        return 1;
      }
    // Start with 2nd number
    int index = 1;
    for (int i = 1; i < nums.size (); i++)
      {
        // If the current number is unique
        // Swap
        if (nums[i] != nums[i - 1])
          {
            nums[index] = nums[i];
            index++;
          }
      }
    return index;
  }
};
