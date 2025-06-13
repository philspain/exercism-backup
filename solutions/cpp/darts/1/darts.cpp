#include "darts.h"
#include <cmath>

using std::pow;
using std::abs;
using std::round;

int outerRadius = 10;
int middleRadius = 5;
int innerRadius = 1;

namespace darts {
    // use pythagorean theorem to get distance from center
    double getDistance(double x, double y) {
        auto distance = 
            pow(abs(x), 2) + 
            pow(abs(y), 2);

        return distance;
    }

    bool hasMissed(double x, double y) {
        return getDistance(x, y) > pow(outerRadius, 2);
    }

    bool isOuterRing(double x, double y) {
        auto distance = getDistance(x, y);
        return  distance <= pow(outerRadius, 2) && distance > pow(middleRadius, 2);
    }

    bool isMiddleRing(double x, double y) {
        auto distance = getDistance(x, y);
        return  distance <= pow(middleRadius, 2) && distance > pow(innerRadius, 2);
    }

    double score(double x, double y) {
        if(hasMissed(x, y)) return 0;
        else if(isOuterRing(x, y)) return 1;
        else if(isMiddleRing(x, y)) return 5;

        return 10; // inner circle is the last option
    }
} // namespace darts