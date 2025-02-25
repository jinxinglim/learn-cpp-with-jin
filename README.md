# Learn C++ with Jin

This repository will document and contain all the key takeaways and codes throughout my process of learning C++.
I will be learning it through following the [Youtube playlist, C++](https://youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&si=eAUec1IBcU8OovFy), by [The Cherno](https://www.youtube.com/channel/UCQ-W1KE9EYfdxhL6S4twUNw).

For each Youtube video that I learn from, I will include the following contents:
- Link to the Youtube video
- Link to the code used in the lesson
- Key takeaways

Note that all learning materials originated from [The Cherno](https://www.youtube.com/channel/UCQ-W1KE9EYfdxhL6S4twUNw) and I do not own any of them.
This repository is only meant for keeping track of my progress while learning C++.
I am making this repository public in case the key takeaways would be useful for anyone.

---
## 0. Welcome to C++

#### Youtube video

- https://youtu.be/18c3MTX0PK0?si=4J4UOj0a0ZhqtodN

#### Code

- None for this lesson

#### Key takeaways

1. C++ is a native language as such that it directly compiles source code into machine code, i.e., C++ source code (written) -> Compiler (compilation) -> Machine code (instructions for machine to run).
2. As different machines (e.g., Windows, Macs, Linux, etc) use different machine code, it is important to choose the right compiler to compile your C++ source code to the appropriate machine code.
3. Other languages such as C#, Java, etc works differenly as they run on virtual machines (VMs) that compile the source code to an intermediate language first. When the application runs the program in the VM, it will then get compiled into apprpriate machine code.

---
## 1. How to set up C++

### A. How to set up C++ on Windows

#### Youtube video

- https://youtu.be/1OsGXuNA5cc?si=vtPBjgUd_NSpXQfK

#### Code link

- None for this lesson

#### Key takeaways

- I am skipping this as I am not using Windows.

### B. How to set up C++ on Mac

#### Youtube video

- https://youtu.be/1E_kBSka_ec?si=TpdggvNOSxSzORK8

#### Code

- [src/1b-how-to-set-up-cpp-on-mac/](src/1b-how-to-set-up-cpp-on-mac/)

#### Key takeaways

1. macOS comes with built-in C++ compiler so installation needed.
2. In the video, The Cherno used [Xcode](https://developer.apple.com/xcode/) as the IDE but
I am using [VSCode](https://code.visualstudio.com/) so I deviated from the instructions he 
provided in the video.
3. macOS still requires Xcode Command Line Tools for Clang (the default C++ compiler), which
means we still need to run the following commands to install it:
    ```
    xcode-select --install
    sudo xcode-select --reset
    clang++ --version // to verify installation
    ```
4. I prefer to use Terminal to provide command to compile instead of relying
the IDE. The commands that I ran on my Terminal are as follows:
    ```
    clang++ main.cpp -o main
    ./main
    ```

### C. How to set up C++ on Linux (WIP)

#### Youtube video 

- https://youtu.be/LKLuvoY6U0I?si=3LGGYCIOs6ao0ROE

#### Code link

- [src/1c-how-to-set-up-cpp-on-linux/](src/1c-how-to-set-up-cpp-on-linux/)

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

3. In the project, [src/1c-how-to-set-up-cpp-on-linux/HelloWorld](src/1c-how-to-set-up-cpp-on-linux/HelloWorld), 
it is advisable to have the following:
    i. a `src/` directory to store your source code
    ii. a `build/` directory to store the build files
    iii. a `CMakeLists.txt` file to tell CMake how to build your project
    iv. a `build.sh` file (or something similar) to automate the build process 

4. After you create the files, e.g., `main.cpp`, in your `src/` directory, you need to create a 
`CMakeLists.txt` file in the root directory of your project. This file will tell CMake how to build
your project. You can refer to the [CMakeLists.txt](src/1c-how-to-set-up-cpp-on-linux/CMakeLists.txt).

5. With the `CMakeLists.txt` file in place, it is advisible to create a `build.sh` file to automate
the build process. You can refer to the [build.sh](src/1c-how-to-set-up-cpp-on-linux/build.sh).
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
