#include "rna_transcription.h"
#include<map>
#include<string>

namespace rna_transcription {
 std::map<char, char> nucleotides{{'G', 'C'}, {'C', 'G'}, {'T', 'A'}, {'A', 'U'}};
 std::string to_rna(std::string rna) {
     std::string dna = "";
     for(size_t i = 0; i < rna.length(); i++){
         dna += nucleotides[rna[i]];
     }

     return dna;
 }

 char to_rna(char rna) {
     return nucleotides[rna];
 }
}  // namespace rna_transcription
