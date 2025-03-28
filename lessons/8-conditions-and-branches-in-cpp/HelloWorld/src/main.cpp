#include <iostream>
#include "log.h"

int main() {
    InitLog();

    int x = 5;
    // DebugLog("x", x);
    bool comparisonResult = x == 5;
    // DebugLog("comparisonResult", comparisonResult);
    if (comparisonResult) {
        Log("Hello World");
    }
    std::cin.get();
}