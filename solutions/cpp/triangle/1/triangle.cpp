#include "triangle.h"
#include <stdexcept>

namespace
{
    bool triangle_inequality_satisfied(int a, int b, int c) {
    return a + b >= c && b + c >= a && a + c >= b;
  }

  bool all_sides_are_positive(double a, double b, double c) {
    return a > 0 && b > 0 && c > 0;
  }

  void is_valid(double a, double b, double c) {
    if(!all_sides_are_positive(a, b, c) || !triangle_inequality_satisfied(a, b, c)) {
      throw std::domain_error("invalid triangle");
    }
  }

  bool is_equilateral(double a, double b, double c) {
    return a == b && b == c;
  }

  bool is_isosceles(double a, double b, double c) {
    return (a == b && b != c) || (a == c && b != a) || (b == c && b != a);
  }

  

} // namespace triangle

triangle::flavor triangle::kind(double a, double b, double c)
{
  is_valid(a, b, c);
  if (is_equilateral(a, b, c))
    return flavor::equilateral;
  else if (is_isosceles(a, b, c))
    return flavor::isosceles;
  else
    return flavor::scalene;
}

