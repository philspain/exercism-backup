#include "sieve.h"

#include <map>

namespace sieve
{

  // TODO: add your solution here
  vector<int> primes(int limit)
  {
    vector<int> found;
    if (limit <= 1)
      return found;

    map<int, int> marked;
    int number = 2;
    while (number <= limit)
    {
      for (int i = number; i <= limit; i += number)
      {
        if (i == number)
          continue;

        if (marked.find(i) == marked.end())
          marked.emplace(i, i);
      }

      number++;
    }

    for (int i = 2; i <= limit; i++)
    {
      if (marked.find(i) == marked.end())
        found.push_back(i);
    }

    return found;
  }
} // namespace sieve
