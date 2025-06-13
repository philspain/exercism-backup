#include "eliuds_eggs.h"
#include <string>
#include <bitset>

using namespace std;

namespace chicken_coop {

// TODO: add your solution here
    int positions_to_quantity(int encoded) {
        if(encoded <= 0) return 0;

        int count = 0;
        string binary = bitset<32>(encoded).to_string();
        for(size_t i = 0; i < binary.length(); i++) {
            if(binary[i] == '1')
                count++;
        }


        return count;
    }

}  // namespace chicken_coop
