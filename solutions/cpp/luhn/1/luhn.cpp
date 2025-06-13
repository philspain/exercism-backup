#include "luhn.h"

namespace luhn {
    string strip_spaces(string text) {
        string stripped = "";
        for(char chr : text) {
            if(chr == ' ') continue;
            stripped.push_back(chr);
        }

        return stripped;
    }

    bool valid(string text) {
        string digits = strip_spaces(text);
        if(digits.length() <= 1) return false;

        int total = 0;
        int start = digits.length() - 1;
        for(int i = start; i >= 0; i--) {
            char digit = digits[i];
            if(!isdigit(digit)) return false;

            int num = digit - '0';
            if((start - i) % 2 == 1)
                num *= 2;
            if(num > 9) num -= 9;

            total += num;
        }

        return total % 10 == 0;
    }
}  // namespace luhn
