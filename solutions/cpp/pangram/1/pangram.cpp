#include "pangram.h"
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

namespace pangram {
    bool is_pangram(string sentence) {
        int len = strlen(sentence.c_str());
        if(len < 26) return false;

        string letters = "abcdefghijklmnopqrstuvwxyz";
        string matches = "";
        for(int i = 0; i < len; i++ ) {
            char chr = tolower(sentence[i]);
            bool hasLetter = letters.find(chr) != string::npos;
            bool hasMatch = matches.find(chr) != string::npos;
            if(hasLetter && !hasMatch) matches += chr;
        }

        return strlen(matches.c_str()) == 26;
    }
}  // namespace pangram
