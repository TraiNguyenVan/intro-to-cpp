// user.cpp
// Using #include "header_file" to access interface
#include <cmath>
#include <iostream>
#include <stdexcept>

#include "./Vector.h"  //get the interface

using namespace std;

double sqrt_sum(Vector& v) {
    double s = 0;
    for (int i = 0; i != v.size(); ++i) {
        s += sqrt(v[i]);
    }
    return s;
}
void f(Vector& v) {
    try {
        v[v.size()] = 7;  // This will throw out_of_range (index == size is out of bounds)
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << "\n";
        // Re-throw or handle gracefully
        throw;
    }
}

int main() {
    Vector v = Vector(5);
    f(v);
    return 0;
}
