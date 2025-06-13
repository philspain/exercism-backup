#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {
    int steps(int num) {
        if(num <= 0) throw std::domain_error("Uh-oh");
        return countSteps(num, 0);
    }

    int countSteps(int num, int steps) {
        if(num == 1) return steps;
        if(num % 2 == 0)
            return countSteps(num / 2, steps + 1);
        else
            return countSteps(3 * num + 1, steps + 1);
    }
}  // namespace collatz_conjecture
