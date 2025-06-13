#include "grade_school.h"
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

namespace grade_school {
  void school::add(string name, int year) const {
    vector<string> students;
    if (!_grades.count(year)) {
      students = vector<string>{ name };
      auto it = _grades.begin();
      _grades.insert(it, { year, students });
    }
    else {
      students = vector<string> { _grades.at(year) };
      students.push_back(name);
      sort(students.begin(), students.end());
      _grades[year] = students;
    }
    
  }

  map<int, vector<string>> school::roster() const {
    return _grades;
  }

  vector<string> school::grade(int year) const {
    return _grades.count(year) ? _grades.at(year) : vector<string> {};
  }
}  // namespace grade_school
