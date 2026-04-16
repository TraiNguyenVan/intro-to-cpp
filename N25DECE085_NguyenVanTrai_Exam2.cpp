/*
 * Name: Nguyễn Văn Trãi
 * Student ID: N25DECE085
 * Exam Number: 2
 */

#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) {
        this->real = r;
        this->imag = i;
    }

    // Overload + operator
    Complex operator+(const Complex& other) const {
        return Complex(this->real + other.real, this->imag + other.imag);
    }

    // Member function to display the complex number
    void display() const {
        std::cout << this->real;
        if (this->imag >= 0) {
            std::cout << " + " << this->imag << "i";
        } else {
            std::cout << " - " << -this->imag << "i";
        }
        std::cout << std::endl;
    }

    // Getters for analysis documentation
    double getReal() const { return this->real; }
    double getImag() const { return this->imag; }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.2, 4.5);

    Complex result = c1 + c2;

    std::cout << "c1: ";
    c1.display();
    std::cout << "c2: ";
    c2.display();
    std::cout << "Result of c1 + c2: ";
    result.display();

    return 0;
}
