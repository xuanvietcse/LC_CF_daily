#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool
  isValid (string s)
  {
    // Special: if number of chars in s is odd, result definitely be false
    if (s.size () & 1 != 0)
      {
        return false;
      }
    // Using stack to store '(' '{' '['
    stack<char> st;
    // Loop
    for (int i = 0; i < s.size (); i++)
      {
        // Store '(' '{' '['
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
          {
            st.push (s[i]);
          }
        // In case ')' '}' ']' found
        else
          {
            // Check empty because in some cases, close brackets appear in
            // front of open brackets. In those cases, stack must be empty
            // (because a pair of bracket found means stack's size = 0). Others
            // conditions are used to check close bracket with equivalent open
            // one
            if (st.empty () || (s[i] == ')' && st.top () != '(')
                || (s[i] == '}' && st.top () != '{')
                || (s[i] == ']' && st.top () != '['))
              {
                // If not equivalent, return false
                return false;
              }
            // If equivalent, pop open bracket to be a pair
            st.pop ();
          }
      }
    // In the end, if there is no left bracket, return true. Otherwise, return
    // false
    return (st.empty () ? true : false);
  }
};