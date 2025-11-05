#include "lasagna_master.h"
#include <algorithm>

using namespace std;

namespace lasagna_master {

  // TODO: add your solution here
  int preparationTime(vector<string> layers, int time) {
    return layers.size() * time;
  }

  amount quantities(vector<string> layers) {
    amount amt{0, 0};
    for (auto &layer : layers) {
      if (layer == "noodles")
        amt.noodles += 50;
      if (layer == "sauce")
        amt.sauce += 0.2;
    }
    return amt;
  }

  void addSecretIngredient(vector<string> &list, const vector<string> &friends_list) {
    auto secret = friends_list.back();
    addSecretIngredient(list, secret);
  }

  void addSecretIngredient(vector<string> &list, string secret) {
    replace(list.begin(), list.end(), string("?"), secret);
  }

  vector<double> scaleRecipe(const vector<double> &quantities, double portions) {
    vector<double> scaledRecipe{};
    for (auto quantity : quantities) {
      scaledRecipe.push_back((quantity / 2) * portions);
    }

    return scaledRecipe;
  }

} // namespace lasagna_master
