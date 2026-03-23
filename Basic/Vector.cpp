// Vector.cpp
#include "Vector.h"

#include <algorithm>
#include <stdexcept>

// Constructor
Vector::Vector(int s) : elem{new double[s]}, sz{s} {}

// Destructor - fixes memory leak
Vector::~Vector() { delete[] elem; }

// Copy constructor
Vector::Vector(const Vector& other) : elem{new double[other.sz]}, sz{other.sz} {
    std::copy(other.elem, other.elem + sz, elem);
}

// Copy assignment
Vector& Vector::operator=(const Vector& other) {
    if (this != &other) {
        double* new_elem = new double[other.sz];
        std::copy(other.elem, other.elem + other.sz, new_elem);
        delete[] elem;
        elem = new_elem;
        sz = other.sz;
    }
    return *this;
}

// Move constructor
Vector::Vector(Vector&& other) noexcept : elem{other.elem}, sz{other.sz} {
    other.elem = nullptr;
    other.sz = 0;
}

// Move assignment
Vector& Vector::operator=(Vector&& other) noexcept {
    if (this != &other) {
        delete[] elem;
        elem = other.elem;
        sz = other.sz;
        other.elem = nullptr;
        other.sz = 0;
    }
    return *this;
}

// Element access with bounds checking
double& Vector::operator[](int i) {
    if (i < 0 || i >= sz) {
        throw std::out_of_range("Vector::operator[] index out of range");
    }
    return elem[i];
}

const double& Vector::operator[](int i) const {
    if (i < 0 || i >= sz) {
        throw std::out_of_range("Vector::operator[] index out of range");
    }
    return elem[i];
}

int Vector::size() const { return sz; }
