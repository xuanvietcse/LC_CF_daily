#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int n;
  cin >> n;
  int arr[n * 2];
  for (int i = 0; i < (n * 2); i++)
    {
      cin >> arr[i];
    }
  int sum = arr[0] + arr[1];
  int max = sum; // Init max value
  for (int i = 2; i < (n * 2 - 1); i = i + 2)
    {
      sum = sum - arr[i] + arr[i + 1];
      max = (max < sum) ? sum : max;
    }
  cout << max << endl;
  return 0;
}
