#include <iostream>

#define MAX_LEN (10)

using namespace std;

int
main ()
{
  int n;
  string s[100];
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> s[i];
    }
  for (int i = 0; i < n; i++)
    {
      if (s[i].size () > MAX_LEN)
        {
          cout << s[i].front () << to_string (s[i].size () - 2) << s[i].back ()
               << endl;
        }
      else
        {
          cout << s[i] << endl;
        }
    }
  return 0;
}