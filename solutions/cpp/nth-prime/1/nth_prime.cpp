#include "nth_prime.h"
#include<cmath>
#include<vector>
#include <stdexcept>

namespace nth_prime {
    int nth(int n) {
        if(n == 0) throw std::domain_error("oops");
        std::vector<int> primes{};
        int current = 2;
        while(static_cast<int>(primes.size()) < n) {
            int limit = std::round(std::sqrt(current));
            bool isPrime = true;
            for(int i = 0; i < static_cast<int>(primes.size()); i++) {
                if(primes[i] > limit) break;
                if(current % primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime) primes.push_back(current);
            current++;
        }

        return primes.back();
    }
}  // namespace nth_prime
