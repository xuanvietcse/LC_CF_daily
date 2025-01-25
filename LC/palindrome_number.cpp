class Solution
{
public:
  bool
  isPalindrome (int x)
  {
    // Corner case: Negative is always false
    if (x < 0)
      {
        return false;
      }
    int ref = x;
    int temp = 0;
    // Loop to reverse
    while (ref != 0)
      {
        // Calculate digit with modulo
        int digit = ref % 10;
        // Check if overflow
        if (temp > (__INT_MAX__ - digit) / 10)
          {
            return false;
          }
        // Reverse
        temp = temp * 10 + digit;
        ref /= 10;
      }
    return (temp == x);
  }
};