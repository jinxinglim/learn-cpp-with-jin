cmake_minimum_required (VERSION 3.5)

project (HelloWorld)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "${PROJECT_SOURCE_DIR}/src")

# Tell the compiler which files to compile
file (GLOB source_files "${source_dir}/*.cpp")

# Tell the compiler to compile the files into an executable
add_executable (HelloWorld ${source_files})
