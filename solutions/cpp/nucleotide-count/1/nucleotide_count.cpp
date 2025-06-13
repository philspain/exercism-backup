#include "nucleotide_count.h"
#include <map>

namespace nucleotide_count {
    std::map<char, int> count(std::string nucleotide) {
        std::map<char, int> counts{{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
        for(size_t i = 0; i < nucleotide.size(); i++) {
            char letter = nucleotide[i];
            if(letter != 'A' && letter != 'C' && letter != 'G' && letter != 'T')
                throw std::invalid_argument("oops");
            
            counts[letter]++;
        }

        return counts;
    }
}  // namespace nucleotide_count
