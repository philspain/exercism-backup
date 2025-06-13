#if !defined(BOB_H)
#define BOB_H

#include <string>

using std::string;

namespace bob {

  string hey(string input);
  bool is_empty(string input);
  bool is_question(string input);
  bool is_forceful(string input);
  bool is_silence(string input);
  bool is_forceful_question(string input);
} // namespace bob

#endif // BOB_H