#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> // For std::swap

void swapping() {
    std::cout << "Swap ---------------------------------" << std::endl;
    int a = 5;
    int b = 10;

    std::cout << "a: " << a << ", b: " << b << std::endl;

    a, b = b, a; // This does not swap values in C++

    std::cout << "a, b = b, a;" << std::endl;
    std::cout << "a: " << a << ", b: " << b << std::endl;

    std::swap(a, b);

    std::cout << "std::swap(a, b);" << std::endl;
    std::cout << "a: " << a << ", b: " << b << std::endl;
}

void arrays() {
    std::cout << "Arrays ---------------------------------" << std::endl;
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    arr[2] = 10; // Change the third element
    std::cout << "After changing the third element to 10: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void constants() {
    std::cout << "Constants ---------------------------------" << std::endl;
    const int constant_value = 42;
    std::cout << "Constant value: " << constant_value << std::endl;
    // constant_value = 50; // This will cause a compilation error
}

void read_input() {
    std::cout << "Input ---------------------------------" << std::endl;
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
}

int add_numbers(int x, int y) {
    std::cout << "Adding numbers ---------------------------------" << std::endl;
    return x + y;
}

int declaring_variables() {
    std::cout << "Declaring Variables ---------------------------------" << std::endl;
    float float_var = 5.5F;
    long long_var = 100000L;
    char letter = 'A';
    bool is_true = true;
    auto inferred_var = 3.14; // Type inferred as double
    std::cout << "float_var: " << float_var << ", long_var: " << long_var
              << ", letter: " << letter << ", is_true: " << is_true
              << ", inferred_var: " << inferred_var << std::endl;
    return 0;
}

int generating_random_number() {
    long seed = std::time(0);
    std::srand(seed);
    std::cout << "Random Number Generation ---------------------------------" << std::endl;
    int num = std::rand();
    std::cout << "Random number: " << num << std::endl;
    int num_in_range = std::rand() % 100; // Random number between 0 and 99
    std::cout << "Random number between 0 and 99: " << num_in_range << std::endl;
    return 0;
}

int main() {
    swapping();
    arrays();
    constants();
    // read_input();
    int a = 5, b = 10;
    int sum = add_numbers(a, b);
    std::cout << "Sum of " << a << " and " << b << " is " << sum << std::endl;
    declaring_variables();
    generating_random_number();
    return 0;
}