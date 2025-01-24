#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int result = 0;
  short arr[26] = { 0 };
  string s;
  cin >> s;
  for (int i = 0; i < s.size (); i++)
    {
      arr[s[i] - 97] = 1;
    }

  for (int i = 0; i < 26; i++)
    {
      result += arr[i];
    }
  cout << (((result & 1) == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
  return 0;
}