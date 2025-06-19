#include "high_scores.h"

#include <algorithm>

namespace arcade {

  std::vector<int> HighScores::list_scores() {
    // TODO: Return all scores for this session.
    return scores;
  }

  int HighScores::latest_score() {
    // TODO: Return the latest score for this session.
    return scores.back();
  }

  int HighScores::personal_best() {
    // TODO: Return the highest score for this session.
    std::vector<int>::iterator result = std::max_element(scores.begin(), scores.end());

    return *result;
  }

  std::vector<int> HighScores::top_three() {
    int max = __INT_MAX__;
    std::vector<int> top_three;
    std::vector<int> positions;
    int iterations = scores.size() < 3 ? (int)scores.size() : 3;
    for (int i = 0; i < iterations; i++) {
      int curr = 0;
      int position = 0;
      for (int j = 0; j < (int)scores.size(); j++) {
        if (find(positions.begin(), positions.end(), j) != positions.end())
          continue;
        int temp = scores[j];
        if (temp > curr && temp <= max) {
          curr = temp;
          position = j;
        }
      }
      top_three.push_back(curr);
      positions.push_back(position);
      max = curr;
    }

    return top_three;
  }

} // namespace arcade
