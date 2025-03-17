#include <iostream>
#include "common.h"
#include "log.h"

void Log(const char* message) {
    std::cout << message << std::endl;
}

void InitLog() {
    Log("Initializing Log");
}