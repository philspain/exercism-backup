#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>

namespace nucleotide_count {
    std::map<char, int> count(std::string nucleotide);
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H