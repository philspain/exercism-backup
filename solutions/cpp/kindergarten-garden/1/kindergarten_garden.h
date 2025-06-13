#pragma once

#include <array>
#include <string>

using namespace std;

namespace kindergarten_garden
{

  // TODO: add your solution here
  enum Plants
  {
    clover,
    grass,
    violets,
    radishes
  };
  // TODO: add your solution here

  array<Plants, 4> plants(string positions, string student);
} // namespace kindergarten_garden
