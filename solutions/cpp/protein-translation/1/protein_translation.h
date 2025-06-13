#if !defined(PROTEIN_TRANSLATION_H)
#define PROTEIN_TRANSLATION_H

#include <map>
#include <string>
#include <vector>

using namespace std;

namespace protein_translation {
    //map<string, string> codons;
    vector<string> proteins(string rna);
}  // namespace protein_translation

#endif // PROTEIN_TRANSLATION_H
