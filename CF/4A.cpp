#include <iostream>

int
main ()
{
  int w;
  std::cin >> w;
  if (w != 2)
    {
      if ((w & 1) == 0)
        {
          std::cout << "YES" << std::endl;
          return 0;
        }
    }
  std::cout << "NO" << std::endl;
  return 0;
}