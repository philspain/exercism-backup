#include "matching_brackets.h"

#include <algorithm>
#include <map>
#include <vector>

namespace matching_brackets
{
  vector<char> open = {'{', '[', '('};
  map<char, char> closed = {{'}', '{'}, {']', '['}, {')', '('}};
  // TODO: add your solution here
  bool check(string text)
  {
    vector<char> brackets;
    for (int i = 0; i < (int)text.length(); i++)
    {
      char curr = text[i];
      bool open_bracket = find(open.begin(), open.end(), curr) != open.end();
      bool closed_bracket = closed.count(curr) != 0;
      if (!open_bracket && !closed_bracket)
        continue;
      if (closed_bracket)
      {
        if (brackets.empty() || brackets.back() != closed[curr])
        {
          return false;
        }

        brackets.pop_back();
      }
      else
      {
        brackets.push_back(curr);
      }
    }

    return brackets.empty();
  }

} // namespace matching_brackets
