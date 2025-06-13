#include "protein_translation.h"

#include <map>
#include <vector>
#include <string>

using namespace std;

namespace protein_translation {

    map<string, string> codons = {
        { "AUG", "Methionine"},
        { "UUU", "Phenylalanine"},
        { "UUC", "Phenylalanine"},
        { "UUA", "Leucine" },
        { "UUG", "Leucine" },
        { "UCU", "Serine" },
        { "UCC", "Serine" },
        { "UCA", "Serine" },
        { "UCG", "Serine" },
        { "UAU", "Tyrosine" },
        { "UAC", "Tyrosine" },
        { "UGU", "Cysteine" },
        { "UGC", "Cysteine" },    
        { "UGG", "Tryptophan" },    
        { "UAA", "STOP" },    
        { "UAG", "STOP" },    
        { "UGA", "STOP" },      
    };
    
    vector<string> proteins(string rna) {
        // get the number nucleotides
        int nucleotideNum = rna.length();
        //define the vector to store the results
        vector<string> results; 
        // loop through the rna in steps of 3 nucleotides
        for(int i = 0; i < nucleotideNum; i += 3) {
            // get the codon
            string codon = rna.substr(i, 3);
            // check if the codon is a key in the map
            bool hasKey = codons.count(codon) == 1;
            // return results if the codon is unexpected or a STOP
            // command
            if(!hasKey || codons[codon] == "STOP") return results;

            // add our match to the results vector
            results.push_back(codons[codon]);
        }

        return results;
    }
}  // namespace protein_translation
