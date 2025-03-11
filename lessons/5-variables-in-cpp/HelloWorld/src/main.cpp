#include <iostream>

int main() {
    int var_int = 65;
    std::cout << var_int << std::endl;
    char var_char = 65;
    std::cout << var_char << std::endl;
    short var_short = 'A';
    std::cout << var_short << std::endl;
    float var_float = 65.0f;
    std::cout << var_float << std::endl;
    double var_double = 65.0;
    std::cout << var_double << std::endl;
    bool var_bool = 65;
    std::cout << var_bool << std::endl;
    bool var_bool_false = false;
    std::cout << var_bool_false << std::endl;
    std::cout << sizeof(var_bool_false) << std::endl;
    std::cin.get();
}