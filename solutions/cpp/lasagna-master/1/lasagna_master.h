#pragma once
#include <string>
#include <vector>

using namespace std;

namespace lasagna_master {

  struct amount {
    int noodles;
    double sauce;
  };

  int preparationTime(vector<string> layers, int time = 2);
  amount quantities(vector<string> layers);
  void addSecretIngredient(vector<string> &list, const vector<string> &friends_list);
  void addSecretIngredient(vector<string> &list, string secret);
  vector<double> scaleRecipe(const vector<double> &quantities, double portions);
} // namespace lasagna_master
