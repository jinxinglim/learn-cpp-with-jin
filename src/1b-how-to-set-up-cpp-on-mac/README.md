### 1B. How to set up C++ on Mac

#### Youtube video

- https://youtu.be/1E_kBSka_ec?si=TpdggvNOSxSzORK8

#### Code

- [HelloWorld/](HelloWorld/)

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