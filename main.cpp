#include <iostream>
#include "functions.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    std::cout << "Add: " << add(5, 3) << std::endl;
    std::cout << "Subtract: " << subtract(5, 3) << std::endl;
    return 0;
}
