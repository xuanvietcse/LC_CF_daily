#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int
  romanToInt (string s)
  {
    int result = 0;
    unordered_map<char, int> hash_map;
    // Map value to key
    hash_map['I'] = 1;
    hash_map['V'] = 5;
    hash_map['X'] = 10;
    hash_map['L'] = 50;
    hash_map['C'] = 100;
    hash_map['D'] = 500;
    hash_map['M'] = 1000;
    // Loop and calculate
    for (int i = 0; i < s.size (); i++)
      {
        if (hash_map[s[i]] < hash_map[s[i + 1]])
          {
            result += hash_map[s[i + 1]] - hash_map[s[i]];
            i++; // Skip the next char
          }
        else
          {
            result += hash_map[s[i]];
          }
      }
    return result;
  }
};