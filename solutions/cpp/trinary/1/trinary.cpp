#include "trinary.h"
#include <stdexcept>
#include <cmath>

namespace trinary {
    int to_decimal(string trinary) {
        int result = 0;
        for(int i = 0; i < (int)trinary.size(); i++) {
            char character = trinary[i];
            if(!isdigit(character)) return 0;
            
            int digit = ((int)character) - ((int)'0');
            result += digit * pow(3, ((int)trinary.size() - 1) - i);
        }

        return result;
    }
}  // namespace trinary
