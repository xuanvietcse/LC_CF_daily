#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int k, n, w;
  cin >> k >> n >> w;
  int result = k * (w * (w + 1) / 2) - n;
  cout << ((result > 0) ? result : 0) << endl;
  return 0;
}