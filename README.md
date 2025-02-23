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

## 0. Welcome to C++

- Youtube video [link](https://youtu.be/18c3MTX0PK0?si=4J4UOj0a0ZhqtodN)
- Code link (none for this lesson)
- Key takeaways:
    1. C++ is a native language as such that it directly compiles source code into machine code, i.e., C++ source code (written) -> Compiler (compilation) -> Machine code (instructions for machine to run).
    2. As different machines (e.g., Windows, Macs, Linux, etc) use different machine code, it is important to choose the right compiler to compile your C++ source code to the appropriate machine code.
    3. Other languages such as C#, Java, etc works differenly as they run on virtual machines (VMs) that compile the source code to an intermediate language first. When the application runs the program in the VM, it will then get compiled into apprpriate machine code.

## 1. How to set up C++

### A. How to set up C++ on Windows

- Youtube video [link](https://youtu.be/1OsGXuNA5cc?si=vtPBjgUd_NSpXQfK)
- Code link (none for this lesson)
- Key takeaways:
    1. I am skipping this as I am not using Windows.

### B. How to set up C++ on Mac

- Youtube video [link](https://youtu.be/1E_kBSka_ec?si=TpdggvNOSxSzORK8)
- Code [link](src/1b-how-to-set-up-cpp-on-mac/)
- Key takeaways:
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

- Youtube video [link](https://youtu.be/LKLuvoY6U0I?si=3LGGYCIOs6ao0ROE)
- Code link
- Key takeaways:

