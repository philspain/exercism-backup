#include "prime_factors.h"
#include <stdio.h>

namespace prime_factors
{

  // TODO: add your solution here
  vector<long long> of(long long number)
  {
    vector<long long> factors;
    long long divisor = 2;
    while (number > 1)
    {
      bool is_divisible = number % divisor == 0;
      if (is_divisible)
      {
        factors.push_back(divisor);
        number = number / divisor;
      }
      else
      {
        divisor++;
      }
    }

    return factors;
  }
} // namespace prime_factors
