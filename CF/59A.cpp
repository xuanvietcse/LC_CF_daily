#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  string s;
  cin >> s;
  int up_count = 0, low_count = 0;
  for (int i = 0; i < s.size (); i++)
    {
      if (s[i] >= 'a')
        {
          low_count++;
        }
      else
        {
          up_count++;
        }
    }
  if (up_count > low_count)
    {
      for (int i = 0; i < s.size (); i++)
        {
          if (s[i] >= 'a')
            {
              s[i] -= 32;
            }
        }
    }
  else
    {
      for (int i = 0; i < s.size (); i++)
        {
          if (s[i] < 'a')
            {
              s[i] += 32;
            }
        }
    }
  cout << s << endl;
  return 0;
}