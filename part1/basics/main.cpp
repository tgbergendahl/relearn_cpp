#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    std::cout << "a: " << a << ", b: " << b << std::endl;

    a, b = b, a; // This does not swap values in C++

    std::cout << "a: " << a << ", b: " << b << std::endl;

    return 0;
}