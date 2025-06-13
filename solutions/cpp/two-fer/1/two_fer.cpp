#include "two_fer.h"
#include <string>

using namespace std;

namespace two_fer
{
    
    string two_fer(string name) {
        string token = name == "" ? "you" : name;
        return "One for " + token + ", one for me.";
    }
} // namespace two_fer

