#!/bin/sh

mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_COMPILER=clang++
make
