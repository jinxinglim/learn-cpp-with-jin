#include <iostream>
#include "log.h"

int main() {
    InitLog();

    /* Example 1 */
    int x = 5;
    // DebugLog("x", x);
    bool comparisonResult = x == 5;
    // DebugLog("comparisonResult", comparisonResult);
    if (comparisonResult) {
        Log("Hello World");
    }

    /* Example 2 */
    const char* ptr = "Hello pointer"; // can change to nullptr
    if (ptr == "Hello pointer") {
        Log(ptr);
    }
    else if (ptr) {
        Log(ptr);
    }
    else {
        Log("ptr is nullptr");
    }
    std::cin.get();
}