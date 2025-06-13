#include "rotational_cipher.h"
#include <iostream>

namespace rotational_cipher {
    string rotate(string text, int key)
    {
        string cipher = "";
        //int adjustedKey = 26 - key;
        for(char chr : text) {
            if(isalpha(chr)) {
                char a = isupper(chr) ? 'A' : 'a';
                char z = a + 25;
                int adjusted_char = chr + key;
                int rotated_char = 
                    adjusted_char > z
                        ? a + abs(z - adjusted_char) - 1
                        : adjusted_char;
                cipher.push_back(rotated_char);
            }
            else cipher.push_back(chr);
            
        }
        return cipher;
    }

}  // namespace rotational_cipher
