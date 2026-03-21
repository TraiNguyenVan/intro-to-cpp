enum class Color { red, blue, green };
enum class Traffic_light { red, yellow, green };

Traffic_light& operator++(Traffic_light& t) {
    switch (t) {
        case Traffic_light::green:
            return t = Traffic_light::yellow;
        case Traffic_light::yellow:
            return t = Traffic_light::red;
        case Traffic_light::red:
            return t = Traffic_light::green;
    }
    return t;
}

int main() {
    // Basic usage of enum class
    Color col = Color::red;
    Traffic_light light = Traffic_light::red;
    // The following usages will cause error
    // Color x = red;                 // which red?
    // Color y = Traffic_light::red;  // Traffic_light::red is not a member of Color
    // Color z = Color::red;          // OK
    //
    // int red = Color::red;  // Color::red is not an int
    // Color c = 2;           // 2 is not a color
    ++light;
    ++light;
    return 0;
}
