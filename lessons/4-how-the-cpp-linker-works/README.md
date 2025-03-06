## 3. How the C++ compiler works

#### Youtube video

- https://youtu.be/H4s55GgAg0I?si=AMWHRlonNf8HSHaC 

#### Code

- [HelloWorld/](HelloWorld/)

#### Key takeaways

1. Recall that there are 2 main processes in compiling C++ code: compiling and linking. To see this, 
lets first comment/remove the `main` function in the [`src/math.cpp`](HelloWorld/src/math.cpp) file in
the [HelloWorld/](HelloWorld/) directory. Then, we compile it with `clang++ -c math.cpp`. This will result 
in a `math.o` file being created and that the compiler does not throw any error.

2. However, if we try to build the project with the `build.sh` script, we will get a linking error, 
"linker command failed with exit code 1", that "undefined reference to `main'". This is because we 
are missing the `main` function in the `math.cpp` file, which is the entry point of the executable 
to be build.

3. By default, the entry point of the executable is the `main` function. There are several ways that 
we can specify the entry point of the executable, which we will not cover in this lesson.

4. Now, let's uncomment the `main` function in the `math.cpp` file and build the project with the
`build.sh` script. This will result in a successful build and an executable file, `HelloWorld`, 
being created. You can run this executable with `./build/HelloWorld`.

5. Let us take a look at another type of linking error. First, let's rename the `Log` function in the 
[`src/log.cpp`](HelloWorld/src/log.cpp) file to `log`. Next, if we compile the `math.cpp` file with
`clang++ -c math.cpp`, it will compile successfully. However, if we try to build the project with the
`build.sh` script, we will get a linking error, "undefined reference to `Log(char const*)'". This is
because the `Log` function is not defined in any of our `.cpp` files in the `src/` directory as we
have renamed it to `log` and the linker cannot find the definition of the `Log` function.

#### 👷 WIP - Stopped at 6:57 👷