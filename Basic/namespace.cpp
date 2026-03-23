#include <iostream>

namespace My_code {

class complex {
    double re, im;

public:
    complex(double r, double i) : re{r}, im{i} {}

    double real() const { return re; }
    double imag() const { return im; }
};

complex sqrt(complex z) {
    // Simplified sqrt for complex numbers (returns the input for now)
    // A real implementation would compute the actual square root
    return z;
}

int main();

}  // namespace My_code

int My_code::main() {
    complex z{1, 2};
    auto z2 = sqrt(z);
    std::cout << "{" << z.real() << ", " << z2.imag() << "}\n";
    return 0;
}

int main() { return My_code::main(); }
