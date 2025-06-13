#include "bob.h"

namespace bob {

  string hey(string input) {
    if (is_forceful_question(input))
      return "Calm down, I know what I'm doing!";
    if (is_question(input))
      return "Sure.";
    if (is_forceful(input))
      return "Whoa, chill out!";
    if (is_silence(input))
      return "Fine. Be that way!";

    return "Whatever.";
  }

  // check if the last signicant character is a question mark
  bool is_question(string input) {
    if (is_silence(input))
      return false;

    for (int i = input.size() - 1; i >= 0; i--) {
      char chr = input[i];
      if (isspace(chr))
        continue;

      return chr == '?';
    }

    return false;
  }

  bool is_forceful_question(string input) {
    return is_forceful(input) && is_question(input);
  }

  bool is_forceful(string input) {
    if (is_silence(input))
      return false;

    int alphaChars = 0;
    for (char chr : input) {
      if (isalpha(chr))
        alphaChars++;
      if (isalpha(chr) && islower(chr))
        return false;
    }

    return alphaChars > 0;
  }

  bool is_silence(string input) {
    if (input.empty()) {
      return true;
    }

    for (uint chr : input) {
      if (!isspace(chr) || chr == '\0')
        return false;
    }

    return true;
  }
} // namespace bob
