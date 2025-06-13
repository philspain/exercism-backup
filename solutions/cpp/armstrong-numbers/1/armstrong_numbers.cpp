#include "armstrong_numbers.h"
#include <string>
#include <math.h>


using namespace std;

namespace armstrong_numbers {

// TODO: add your solution here
    bool is_armstrong_number(int number) {
        string digits = to_string(number);
        if(digits.length() == 0) return false;
        
        int count = (int)digits.length();
        int sum = 0;
        for(int i = 0; i < count; i++) {
            int digit = digits[i] - '0';
            sum += pow(digit, count);
        }

        return number == sum;
    }
}  // namespace armstrong_numbers
