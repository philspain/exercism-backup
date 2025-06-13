#include "kindergarten_garden.h"

#include <map>

namespace kindergarten_garden
{
  map<char, Plants> mapping = {
      {'C', Plants::clover},
      {'G', Plants::grass},
      {'R', Plants::radishes},
      {'V', Plants::violets},
  };

  // Bob, Charlie, David, Eve, Fred, Ginny, Harriet, Ileana, Joseph, Kincaid, and Larry
  map<string, array<int, 2>> seats = {
      {"Alice", {0, 1}},
      {"Bob", {2, 3}},
      {"Charlie", {4, 5}},
      {"David", {6, 7}},
      {"Eve", {8, 9}},
      {"Fred", {10, 11}},
      {"Ginny", {12, 13}},
      {"Harriet", {14, 15}},
      {"Ileana", {16, 17}},
      {"Joseph", {18, 19}},
      {"Kincaid", {20, 21}},
      {"Larry", {22, 23}},

  };

  array<Plants, 4> plants(string positions, string student)
  {
    int midpoint = positions.find('\n');
    string row1 = positions.substr(0, midpoint);
    string row2 = positions.substr(midpoint + 1, positions.length() - midpoint);

    array<Plants, 4> results;
    array<int, 2> studentsSeats = seats[student];

    results[0] = mapping[row1[studentsSeats[0]]];
    results[1] = mapping[row1[studentsSeats[1]]];
    results[2] = mapping[row2[studentsSeats[0]]];
    results[3] = mapping[row2[studentsSeats[1]]];

    return results;
  }
} // namespace kindergarten_garden
