### 1B. How to Setup C++ on Linux

#### Youtube video 

- https://youtu.be/LKLuvoY6U0I?si=3LGGYCIOs6ao0ROE

#### Code link

- [HelloWorld/](HelloWorld/)

#### Key takeaways

1. For Linux, you can install and use either the `g++`, GNU Compiler Collection (GCC), compiler 
or `clang++`, Clang.
    ```
    sudo apt update
    sudo apt install g++    # Install GNU C++ compiler
    sudo apt install clang  # Install Clang (optional)
    ```

2. To compile and run the C++ code in Linux, you need to [CMake](https://cmake.org/) to build our project.
    ```
    sudo apt install cmake
    ```

3. In the project, it is advisable to have the following:
    i. a `src/` directory to store your source code
    ii. a `build/` directory to store the build files
    iii. a `CMakeLists.txt` file to tell CMake how to build your project
    iv. a `build.sh` file (or something similar) to automate the build process 

4. After you create the files, e.g., `main.cpp`, in your `src/` directory, you need to create a 
`CMakeLists.txt` file in the root directory of your project. This file will tell CMake how to build
your project. You can refer to the [CMakeLists.txt](HelloWorld/CMakeLists.txt).

5. With the `CMakeLists.txt` file in place, it is advisible to create a `build.sh` file to automate
the build process. You can refer to the [build.sh](HelloWorld/build.sh).
Note that I deviated from the video on the following points:
    - I prefer not to use [CodeLite](https://codelite.org/) as the IDE as I am using VSCode and
    running the commands in the Terminal manually.
    - I prefer to use `clang++` instead of `g++`.
    - I prefer to create a `build/` directory to store the build files instead of building 
    in the root directory.
    - I instruct the `build.sh` to run `make` at the end of the script to run the `build/Makefile`,
    which will compile the source code and create the executable file.

6. Now we can build and run the executable created by executing the following:
    ```
    ./build.sh
    ./build/HelloWorld
    ```