#include <bits/stdc++.h>

using namespace std;

int
main (int argc, char *argv[])
{
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < a.size (); i++)
    {
      // To lowercase
      if (a[i] < 95)
        a[i] += 32;
      if (b[i] < 95)
        b[i] += 32;
      int temp = a[i] - b[i];
      if (temp != 0)
        {
          cout << ((temp > 0) ? 1 : -1) << endl;
          return 0;
        }
    }
  cout << 0 << endl;
  return 0;
}