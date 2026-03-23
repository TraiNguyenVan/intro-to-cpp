constexpr double C = 299792.458;  // km/s
void f(double speed) {
    constexpr double local_max = 160.0 / (60 * 60);  // km/s
    // static_assert(speed < C, "can't go that fast");      // error: speed is not constexpr
    static_assert(local_max < C, "can't go that fast");  // OK
}
int main() {
    static_assert(4 <= sizeof(int),
                  "integers are too small");  // its obvious that int has a size of 4 bytes

    return 0;
}
