#include <bits/stdc++.h>

using namespace std;

int
compare (const void *a, const void *b)
{
  return (*(char *)a - *(char *)b);
}

int
main (int argc, char *argv[])
{
  string s;
  cin >> s;
  char temp[s.size () / 2];
  int i_temp = 0;
  for (int i = 0; i < s.size (); i += 2)
    {
      temp[i_temp++] = s[i];
    }
  qsort (temp, i_temp, sizeof (char), compare);
  for (int i = 0; i < i_temp - 1; i++)
    {
      cout << temp[i] << "+";
    }
  cout << temp[i_temp - 1] << endl;
  return 0;
}