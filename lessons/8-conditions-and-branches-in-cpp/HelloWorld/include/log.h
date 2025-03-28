#pragma once
#include <iostream>

// #ifndef LOG_H
// #define LOG_H

void InitLog();

void Log(const char* message);

// Template function to log variables of any type
template <typename T>
void DebugLog(const std::string& varName, const T& value) {
    std::cout << "\n******************" << std::endl;
    std::cout << "!!! DebugLog: " << varName << " is " << value << std::endl;
    std::cout << "******************\n" << std::endl;
}

struct Player {};

// #endif