#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  long long n;
  cin >> n;
  cout << n << " ";
  while (n >= 2)
    {
      if ((n & 1) == 0)
        {
          n /= 2;
        }
      else
        {
          n = n * 3 + 1;
        }
      cout << n << " ";
    }
  return 0;
}
