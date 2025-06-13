#pragma once

#include <string>
#include <bitset>
#include <unordered_set>

using namespace std;

namespace allergies {
// TODO: add your solution here
    class allergy_test
    {
        private:
            unordered_set<string> allergies;
            unordered_set<string> parse_score(int score);
            string get_exponent(int exponent);

        public:
            allergy_test(int score);
            bool is_allergic_to(string allergen);
            unordered_set<string> get_allergies();
    };

    enum Allergens : int {
        EGGS = 1,
        PEANUTS = 2,
        SHELLFISH = 4,
        STRAWBERRIES = 8,
        TOMATOES = 16,
        CHOCOLATE = 32,
        POLLEN = 64,
        CATS = 128
    };
}  // namespace allergies
