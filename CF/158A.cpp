#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int n, k;
  cin >> n >> k;
  int result = 0;
  int temp[50];
  for (int i = 0; i < n; i++)
    {
      cin >> temp[i];
    }
  for (int i = 0; i < n; i++)
    {
      if (temp[i] >= temp[k - 1] && temp[i] > 0)
        {
          result++;
        }
    }
  cout << result << endl;
  return 0;
}