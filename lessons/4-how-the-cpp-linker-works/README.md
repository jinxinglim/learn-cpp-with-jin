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

6. If you comment away the `Log("Multiply");` function call in the `math.cpp` file, the project will build successfully.
This is because the linker does not need to find the definition of the `Log` function as it is not being
used in the `math.cpp` file.

7. On the other hand, if I choose to comment the line `std::cout << Multiply(5, 8) << std::endl;` instead,
the project will not build successfully. This is because the `Multiply` function is being used in the `math.cpp`
file, which in turn could be used in another file that imports it. Thus, the linker will try to link the function 
and in this case, it cannot find the definition of the `Multiply` function.

8. There is a way to enforce that the `Multiply` function is only used in the `math.cpp` file. This can be done
by declaring the function as `static` (prefix). This should result in a successful build of the project.
However, as we see from the [`CMakeLists.txt`](HelloWorld/CMakeList.txt) file, we added a `-Werror` flag
to the compiler, which will treat all warnings as errors. This will result in a build error like 
"error: unused function 'Multiply'" instead of just a warning with a successful build. We can try removing
the `-Werror` flag from the [`CMakeLists.txt`](HelloWorld/CMakeList.txt) file and build the project again
to see the difference.

9. Note that linking errors can also be caused by difference in return types between function declaration and
definition, difference in function signatures such as number of arguments, and so on.

10. Another type of common linking errors that we can encounter is when we have multiple symbols/definitions of the 
same function. This can happen when we define a function in a header file and include it in another `.cpp` file that 
also contains another definition of the same function. This is because the linker does not know which function definition
that it needs to call. To see that, we can try to copy the `Log` function from the `log.cpp` file to the `math.cpp` file. 
This will result in a linking error, "multiple definition of `Log(char const*)'".

11. The error mentioned above is especially common when we include header files in multiple `.cpp` files as the same 
function definition will be included in multiple `.cpp` files, making the linker confused on which definition to use.
There are several ways to resolve this issue:
    - Declare the function as `inline` in the header file. This will tell the linker to use only one definition of the function
    as it will be inlined (i.e., "copy and replace") in all translation units that include the header file.
    - Declare the function as `static` in the header file. This will tell the linker to use only one definition of the function
    as it will be local (i.e., used only within the caller file) to the translation unit that includes the header file.
    This would mean that each translation unit that includes the header file will have its own copy of the function.
    - The best way or common practice would be to just declare the function in the header file and define it in just
    one `.cpp` file. This will ensure that the linker will only have one definition of the function to link to.
