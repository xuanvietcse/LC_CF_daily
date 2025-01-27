#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int n;
  cin >> n;
  char s[n];
  for (int i = 0; i < n; i++)
    {
      cin >> s[i];
    }
  int a_count = 0, d_count = 0;
  a_count = count (s, s + n, 'A');
  d_count = count (s, s + n, 'D');
  cout << ((a_count > d_count)
               ? "Anton"
               : ((a_count < d_count) ? "Danik" : "Friendship"))
       << endl;
  return 0;
}
