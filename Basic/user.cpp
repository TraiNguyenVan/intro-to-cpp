// user.cpp
// Using #include "header_file" to access interface
#include <cmath>

#include "./Vector.h"  //get the interface

using namespace std;

double sqrt_sum(Vector& v) {
    double s = 0;
    for (int i = 0; i != v.size(); ++i) {
        s += sqrt(v[i]);
    }
    return s;
}

int main() { return 0; }
