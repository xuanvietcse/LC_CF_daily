#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  char a, b, c;
  int result = 0;

  for (int i = 0; i < n; i++)
    {
      cin >> a >> b >> c;
      if (b == '+')
        {
          result++;
        }
      else
        {
          result--;
        }
    }
  cout << result << endl;
  return 0;
}