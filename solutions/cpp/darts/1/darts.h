#if !defined(DARTS_H)
#define DARTS_H

namespace darts {
    bool isOutside(double x, double y);
    bool isOuterRing(double x, double y);
    double score(double x, double y);
} // namespace darts

using namespace darts;
#endif //DARTS_H