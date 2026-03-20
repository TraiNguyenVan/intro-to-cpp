#include <iostream>

int main() {
    char s1[] = {'a', 'b', 'c', '\0'};
    char s2[4] = {'a', 'b', 'c', '\0'};
    char s3[4] = "abc";
    char s4[] = "abc";
    const char* s5 = "abc";
    std::cout << s1 << "\n";
    std::cout << s2 << "\n";
    std::cout << s3 << "\n";
    std::cout << s4 << "\n";
    std::cout << s5 << "\n";
    return 0;
}
