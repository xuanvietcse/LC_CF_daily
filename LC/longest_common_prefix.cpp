#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string
  longestCommonPrefix (vector<string> &strs)
  {
    // Special
    if (strs.empty ())
      {
        return "";
      }
    // Set first string equal to prefix
    string prefix = strs[0];
    // Loop
    for (int i = 1; i < strs.size (); i++)
      {
        // If prefix is not found in strs[i], remove last character and
        // keep finding until prefix = ""
        while (strs[i].find (prefix) != 0)
          {
            prefix = prefix.substr (0, prefix.size () - 1);
          }
      }
    return prefix;
  }
};