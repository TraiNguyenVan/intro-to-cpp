#include <iostream>

using namespace std;

class Vector {
public:
    Vector(int s) : elem{new double[s]}, sz{s} {};
    double& operator[](int i) { return elem[i]; }
    int size() { return sz; }

private:
    double* elem;
    int sz;
};

double read_and_sum(int s) {
    Vector v(5);
    double sum = 0;
    for (int i = 0; i != v.size(); ++i) {
        cin >> v[i];
        sum += v[i];
    }
    return sum;
}

int main(int argc, char* argv[]) {
    cout << read_and_sum(5) << "\n";
    return 0;
}
