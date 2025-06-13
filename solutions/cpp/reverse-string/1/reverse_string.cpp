#include "reverse_string.h"
#include <string>
#include <stdio.h>
#include <cstring>

using std::strlen;
using std::string;

namespace reverse_string {
    string reverse_string(string text) {
        if(text == "") return "";
        int chars = strlen(text.c_str());
        string reversed = "";

        for(int i = chars - 1; i >= 0; --i) {
            
            reversed = reversed + string(1, text[i]);
        }

        return reversed;
    }
}  // namespace reverse_string
