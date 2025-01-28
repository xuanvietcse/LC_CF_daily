#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int y;
  cin >> y;
  while (1)
    {
      int temp = ++y;
      int digit[10] = { 0 };
      int sum = 0;
      for (int i = 0; i < 4; i++)
        {
          digit[temp % 10] = 1;
          temp /= 10;
        }
      for (int i = 0; i < 10; i++)
        {
          sum += digit[i];
        }
      if (sum == 4)
        {
          break;
        }
    }
  cout << y << endl;
  return 0;
}
