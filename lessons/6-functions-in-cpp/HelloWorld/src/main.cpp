#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

void multiplyAndLog(int a, int b) {
    int result = multiply(a, b);
    std::cout << result << std::endl;
}

int main() {
    multiplyAndLog(2, 3);
    multiplyAndLog(4, 5);
    multiplyAndLog(6, 7);
    std::cin.get();
}