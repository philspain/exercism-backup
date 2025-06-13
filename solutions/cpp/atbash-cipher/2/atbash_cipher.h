#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H

#include <string>

using namespace std;

namespace atbash_cipher {
    string encode(string text);
    string decode(string text);
    bool is_valid(char chr);
    char invert(char chr);
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H