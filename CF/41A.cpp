#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  string s, t;
  cin >> s >> t;
  // Special case: if these length are not equal -> NO
  if (s.size () != t.size ())
    {
      cout << "NO" << endl;
      return 0;
    }
  for (int i = 0; i < s.size (); i++)
    {
      if (s[i] != t[s.size () - 1 - i])
        {
          cout << "NO" << endl;
          return 0;
        }
    }
  cout << "YES" << endl;
  return 0;
}
