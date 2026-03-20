#include <complex>
#include <vector>

int main() {
    double d1 = 2.3;
    double d2{2.3};  // initialize with a contructor
    std::complex<double> z = 1;
    std::complex<double> z1 = {d1, d2};
    std::complex<double> z2{d1, d2};
    std::vector<int> v{1, 2, 3, 4, 5};
    return 0;
}
