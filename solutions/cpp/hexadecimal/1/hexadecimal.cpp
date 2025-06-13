#include "hexadecimal.h"
#include <map>

using namespace std;

namespace hexadecimal {
    map<char, int> hex_map = {
        {'0', 0x0},
        {'1', 0x1},
        {'2', 0x2},
        {'3', 0x3},
        {'4', 0x4},
        {'5', 0x5},
        {'6', 0x6},
        {'7', 0x7},
        {'8', 0x8},
        {'9', 0x9},
        {'a', 0xa},
        {'b', 0xb},
        {'c', 0xc},
        {'d', 0xd},
        {'e', 0xe},
        {'f', 0xf}
    };

    int convert(string hex_string) {
        int result = 0x0;
        for(char c : hex_string) {
            if(isalpha(c) && c > 'f') return 0;
            
            result = result * 0x10 + hex_map[c];
        }

        return result;
    }
}  // namespace hexadecimal
