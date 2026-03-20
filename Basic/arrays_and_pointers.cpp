#include <iostream>

char v[6];  // array of 6 characters

double f(double&) {};

// Basic array and pointer example
void f1() {
    char* p1;      // pointer to character
    char* p2 = v;  // pointer to an array
}

// Assign a pointer value as some variable's memory address and see what object the pointer is
// pointing to
void f2() {
    char* p1 = &v[3];  // p points to the 4th character
    char x = *p1;      // x is the object that p1 points to
}

// Declaration operators;
void f3() {
    double a[5];
    double* p;
    *p = 5;
    const double& r = *p;
}

// Array copy
void copy_fct() {
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];
    for (auto i = 0; i != 10; ++i) v2[i] = v1[i];
    for (auto x : {1, 2, 3, 4, 5}) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

// References (Tham chiếu)
void references() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto& x : v) {
        ++x;
    }
}

// Null pointer
void f4() {
    double* pd = nullptr;
    int* x = nullptr;
}
// Always check vailidity of pointer(pointed to some object)
int count_x(char* p, char x) {
    if (p == nullptr) return 0;
    int count = 0;
    for (; *p != 0; ++p) {
        if (*p == x) ++count;
    }
    return count;
}

int main(int argc, char* argv[]) {
    references();
    std::cout << "say gex 67\n";
    return 0;
}
