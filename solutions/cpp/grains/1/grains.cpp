#include "grains.h"
#include <cmath>

namespace grains {
    unsigned long long square(unsigned long long num) {
        if(num <= 2ULL) return num;
        return std::pow(2ULL, num - 1);
    }

    unsigned long long total() {
        unsigned long long num = 64ULL;
        unsigned long long total = 0;
        for(unsigned long long i = num; i > 0; i--) {
            total += square(i);
        }

        return total;
    }
}  // namespace grains
