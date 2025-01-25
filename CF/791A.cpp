#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int a, b;
  cin >> a >> b;
  int result = 0;
  while (a <= b)
    {
      result++;
      a *= 3;
      b *= 2;
    }
  cout << result << endl;
  return 0;
}