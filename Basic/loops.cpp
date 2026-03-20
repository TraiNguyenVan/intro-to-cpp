#include <iostream>
bool accept3() {
    int tries = 1;
    while (tries < 4) {
        std::cout << "Do you want ot proceed (y or n)?\n";  // write question
        char answer = 0;
        std::cin >> answer;  // get answer
        switch (answer) {
            default:
                std::cout << "Sorry i don't understand that.\n";
                ++tries;
            case 'y':
                return true;
            case 'n':
                return false;
        }
    }
    std::cout << "I will take that as a no.\n";
    return false;
}
int main(int argc, char* argv[]) { return 0; }
