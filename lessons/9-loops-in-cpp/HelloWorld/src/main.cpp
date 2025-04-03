#include <iostream>
#include "log.h"

int main() {
    InitLog();
    Log("");
    
    // `for` loop example 1
    Log("For loop example 1");
    Log("------------------");
    for (int i = 0; i < 5; ++i) {
        Log("Hello World");
    }
    Log("------------------");
    Log("");

    // `for` loop example 2
    Log("For loop example 2");
    Log("------------------");
    int i = 0; // initialization is done outside the loop
    bool condition = true; // condition is set to true outside the loop
    for (/* empty initialization */; condition ;/* empty increment */) {
        Log("Hello World");
        ++i; // increment is done inside the loop
        if (!(i < 5)) {
            condition = false; // update the condition to exit the loop
        }
    }
    Log("------------------");
    Log("");

    // `while` loop example
    Log("While loop example");
    Log("------------------");
    int j = 0; // initialization
    while (j < 5) { // condition
        Log("Hello World");
        ++j; // increment
    }
    Log("------------------");
    Log("");

    // `while` vs `do while` loop example
    Log("False while loop example");
    Log("------------------");
    bool condition_aux = false; // condition_aux is set to false
    // the following loop will not execute
    while (condition_aux) {
        Log("Hello World");
    }
    Log("------------------");
    Log("");

    Log("False do while loop example");
    Log("------------------");
    // the following loop will be executed at once
    do {
        Log("Hello World");
    } while (condition_aux);
    Log("------------------");
    Log("");
    std::cin.get();
}