#include <cmath>
using namespace std;

class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    int size();

private:
    double* elem;
    int sz;
};
// Modularity, class's member can be defined out side of class definition
Vector::Vector(int s) : elem{new double[s]}, sz{s} {};
double& Vector::operator[](int i) { return elem[i]; }
int Vector::size() { return sz; };
int main(int argc, char* argv[]) {
    sqrt(2);  // sqrt function's body is defined somewhere in standard math library of C++
    return 0;
}
