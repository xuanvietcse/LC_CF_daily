#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int>
  twoSum (vector<int> &nums, int target)
  {
    // Hash map to store number - index (key - value)
    unordered_map<int, int> num_index;
    // Loop
    for (int i = 0; i < nums.size (); i++)
      {
        // Calculate remaining value
        int remain = target - nums[i];
        // Check if remaining value is in hash map or not
        if (num_index.find (remain) != num_index.end ())
          {
            // Return if found
            return { num_index[remain], i };
          }
        // Add to hash map if not found
        num_index[nums[i]] = i;
      }
    // Return Null if there is no solution
    return {};
  }
};

/**
 * EXPLAINATION
 * 1. Hash Map (unordered_map):
 * - The unordered_map maps numbers to their indices for O(1) average-time
 * lookups
 * 2. Iteration
 * - Loop through the array nums and calculate the remain (i.e., target -
 * nums[i])
 * - Check if complement is already in the unordered_map:
 *     - If YES, return the indices of remain and the current element
 *     - If NO, add the current number and its index to the map
 * 3. Return
 * - The solution is guaranteed to exist, so we always return the indices when
 * a match is found
 */