#include <iostream>
int simple_add(int x) {
    x = x + 1;
    return x;
}

int add(int &x) {
    x = x + 1;
    return x;
}

int pointer_add(int *x) {
    *x = *x + 1;
    return *x;
}

int main() {
    int x = 10;
    int *ptr_x = &x; // Pointer to x

    int simple_result = simple_add(x);
    std::cout << "Result after simple_add function: " << simple_result << std::endl;
    std::cout << "Value of x after simple_add function: " << x << std::endl;

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value of ptr_x: " << ptr_x << std::endl;
    std::cout << "Value pointed to by ptr_x: " << *ptr_x << std::endl;

    int result = add(x);
    std::cout << "Result after add function: " << result << std::endl;
    std::cout << "Value of x after add function: " << x << std::endl;

    int pointer_value = add(*ptr_x);
    std::cout << "Pointer value after add function: " << pointer_value << std::endl;
    std::cout << "Value of x after add function via pointer: " << x << std::endl;

    int pointer_result = pointer_add(ptr_x);
    std::cout << "Result after pointer_add function: " << pointer_result << std::endl;
    std::cout << "Value of x after pointer_add function: " << x << std::endl;

    return 0;
}
