#include <vector>

// no parameter name cause just put it there, dont use it yet
double sum(const std::vector<double>&);

constexpr double square(double x) { return x * x; }
double sum(const std::vector<double>& v) {
    double s = 0;
    for (const auto x : v) {
        s += x;
    };
    return s;
}
int main(int argc, char* argv[]) {
    const int dmv = 17;
    int var = 17;
    constexpr double max1 = 1.4 * square(dmv);  // OK: expressions should be all constexpr
    // constexpr double max2 = 1.4 * square(var);  // error: var's fault
    const double max3 = 1.4 * square(var);  // OK: may be evaluated at runtime
    std::vector<double> v = {1.2, 3.4, 4.5};
    const double s1 = sum(v);  // evaluated at runtime
    // constexpr double s2 = sum(v); // error: sum's fault
}
