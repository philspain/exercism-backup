#include "eliuds_eggs.h"

namespace chicken_coop {

// TODO: add your solution here
    int positions_to_quantity(int number) {
        if(number <= 0) return 0;
        int count = 0;
        while(number) {
            count++;
            number = number & (number - 1);
        }


        return count;
    }

}  // namespace chicken_coop
