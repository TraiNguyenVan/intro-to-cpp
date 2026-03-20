#include <iostream>

using namespace std;

struct Vector {
    int sz;
    double* elem;
};
void Vector_init(Vector& v, int s) {
    v.elem = new double[s];  // new is a dynamic memory allocation operator
}
double read_and_sum(int s) {
    Vector v;
    Vector_init(v, s);
    double sum = 0;
    for (int i = 0; i != s; ++i) {
        cin >> v.elem[i];
        sum += v.elem[i];
    }
    return sum;
}
// Understand the logic by try creating a copy, a reference, a pointer
void f(Vector v, Vector& rv, Vector* pv) {
    int s1 = v.sz;
    int s2 = rv.sz;
    int s3 = pv->sz;
}
int main(int argc, char* argv[]) {
    cout << read_and_sum(5);
    return 0;
}
