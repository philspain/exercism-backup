#include "difference_of_squares.h"
#include <cmath>

namespace difference_of_squares {
    int sum_of_squares(int n) {
        int sum = 1;
        for(int i = 2; i <= n; i++) {
            sum += std::pow(i, 2);
        }

        return sum;
    }
    
    int square_of_sum(int n) {
        int sum = 1;
        for(int i = 2; i <= n; i++) {
            sum += i;
        }

        return std::pow(sum, 2);
    }

    int difference(int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }
}  // namespace difference_of_squares
