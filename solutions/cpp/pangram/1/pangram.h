#if !defined(PANGRAM_H)
#define PANGRAM_H
#include <string>

using std::string;

namespace pangram {
    bool is_pangram(string sentence);

}  // namespace pangram

#endif // PANGRAM_H