#include "allergies.h"

namespace allergies {

// TODO: add your solution here
    allergy_test::allergy_test(int score) {
        allergies = parse_score(score);
    }

    unordered_set<string> allergy_test::parse_score(int score) {
        unordered_set<string> results;
        if(score == 0) return results;
        
        if((score & EGGS) != 0) results.emplace("eggs");
        if((score & PEANUTS) != 0) results.emplace( "peanuts");
        if((score & SHELLFISH ) != 0) results.emplace("shellfish");
        if((score & STRAWBERRIES ) != 0) results.emplace("strawberries");
        if((score & TOMATOES ) != 0) results.emplace("tomatoes");
        if((score & CHOCOLATE ) != 0) results.emplace("chocolate");
        if((score & POLLEN ) != 0) results.emplace("pollen");
        if((score & CATS ) != 0) results.emplace("cats");

        return results;
    }

    bool allergy_test::is_allergic_to(string allergen) {
        return allergies.find(allergen) != allergies.end();
    }

    unordered_set<string> allergy_test::get_allergies() {
        return allergies;
    }

}  // namespace allergies
