#include <iostream>

namespace My_code {

class complex {
public:
    complex(double r, double i) : re{r}, im{i} {}

    double real() const { return re; }
    double imag() const { return im; }

private:
    double re, im;
};

int main();

}  // namespace My_code
My_code::complex sqrt(My_code::complex z) {
    // Simplified sqrt for complex numbers (returns the input for now)
    // A real implementation would compute the actual square root
    return z;
}

int My_code::main() {
    complex z{1, 2};
    auto z2 = sqrt(z);
    std::cout << "{" << z.real() << ", " << z2.imag() << "}\n";
    return 0;
}

int main() { return My_code::main(); }
