#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int n;
  cin >> n;
  cout << ((n <= 5) ? 1 : ((n / 5) + ((n % 5 == 0) ? 0 : 1))) << endl;
  return 0;
}