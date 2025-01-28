#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int n, h;
  int result = 0;
  cin >> n >> h;
  for (int i = 0; i < n; i++)
    {
      int temp = 0;
      cin >> temp;
      if (temp > h)
        result += 2;
      else
        result += 1;
    }
  cout << result << endl;
  return 0;
}
