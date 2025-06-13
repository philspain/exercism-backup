#include "atbash_cipher.h"
#include <string>
#include <cctype>
#include <stdexcept>

using namespace std;

namespace atbash_cipher {
    string encode(string text) {
        string encrypted;
        int spaces= 0;
        for(uint64_t i = 0; i < text.length(); i++) {
            uint64_t char_count = encrypted.length() - spaces;
            bool needs_space = 
                char_count % 5 == 0 and encrypted.back() != ' ' and i > 0 and i < text.length() -1;
            if(needs_space) {
                encrypted += " ";
                spaces++;
            }

            char chr = text[i];
            if(is_valid(chr))
                encrypted += invert(chr);
        }
        
        return encrypted;
    }

    string decode(string text) {
        string encrypted;
        for(char chr : text) {
            if(is_valid(chr))
                encrypted += invert(chr);
        }
        
        return encrypted;
    }

    bool is_valid(char chr) {
        return 
            (chr >= 'a' and chr <= 'z') or 
            (chr >= 'A' and chr <= 'Z') or 
            (chr >= '0' and chr <= '9');
    }

    char invert(char chr) {
        if(chr >= 'a' and chr <= 'z')
            return ('a' + ((char)'z' - chr)); 
        else if(chr >= 'A' and chr <= 'Z') {
            return ('a' + ((char)'z' - tolower(chr))); 
        }
        else {
            if(chr < '0' or chr > '9')
                throw runtime_error("Invalid character has been received");

            return chr; 
        }
    }
}  // namespace atbash_cipher
