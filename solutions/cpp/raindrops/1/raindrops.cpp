#include "raindrops.h"
#include <string>

using std::string;
using std::to_string;

namespace raindrops {
    string convert(int raindrop) {
        string result = "";
        
        if(raindrop % 3 == 0)
            result += "Pling";
        if(raindrop % 5 == 0)
            result += "Plang";
        if(raindrop % 7 == 0)
            result += "Plong";

        return result == "" ? to_string(raindrop) : result;
    }
}  // namespace raindrops
