#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <map>
#include <vector>

using std::string;
using std::map;
using std::vector;

namespace grade_school {
    class school { 
        private:
            mutable map<int, vector<string>> _grades = map<int, vector<string>>();
        public:
            void add(string name, int year) const;
            map<int, vector<string>> roster() const;
            vector<string> grade(int year) const;
    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H