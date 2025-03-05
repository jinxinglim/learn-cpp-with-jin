## 2. How C++ Works

#### Youtube video

- https://youtu.be/SfGuIVzE_Os?si=3LGGYCIOs6ao0ROE

#### Code

- [HelloWorld/](HelloWorld/)

#### Key takeaways

1. Anything that begin/prefix with `#` is a preprocess statement. These statements will be preprocessed
before the code is compiled.

2. For example, `#include <iostream>` is a preprocess statement that tells the compiler to include the
`iostream` file into the current file. This is like copy and pasting the contents of the "include" file 
into the current file.

3. When we run our compiled application, the computer will execute the code that we have written in order 
line by line (generally). So the positions of where the preprocess statements are placed may matter in 
some cases.

4. The `main()` function is a special function in C++ where it is the entry point of the application. 
When the application is run, the computer will start executing the code from the `main()` function.
The return type of the `main()` function is `int` and it returns an integer value to the operating system
to indicate the status of the application. A return value of `0` indicates that the application ran
successfully.

5. `<<` is the insertion operator in C++ that is used to insert data into the output stream. In the
example, `std::cout << "Hello, World!" << std::endl;`, the `std::cout` is the output stream object
that is used to output data to the console. The `<<` operator is used to insert the string "Hello, World!"
into the output stream. The `std::endl` is used to insert a newline character into the output stream.

6. There are several important settings/flags that we need to take note of when compiling our C++ code.
For example:
    - Solution configuration: Set of rules that the compiler will use to compile the code.
    - Solution platform: The platform that the code will be compiled for, e.g., x86, Android, etc.

7. Usually every `.cpp` will get compiled (which can be instructed by the `CMakeLists.txt` file) but not
`.hpp` files. The `.hpp` files are usually get included in the `.cpp` files and that is where they get
compiled.

8. Every `.cpp` files will get compiled into an object file (`.o` file) individually and then the object 
files will get linked together by the linker to create the final executable file. For example, if you 
build the project for this lesson, you can find the object files in the `build/CMakeFiles/HelloWorld.dir/src/` directory.

9. In many cases, we will need to have different functions defined in different files. As you see in the project 
for this lesson, the `main.cpp` contains the `main()` function, which calls the `Log(const char* message)` function 
that is defined in the `Log.cpp` file. We can see that there is no `#include "log.cpp"` in the `main.cpp` file but 
the `main` function can still call the `Log` function. This is because the `CMakeLists.txt` file tells the compiler 
to compile the `.cpp` files within the `src/` directory and link them up together to create the final executable file.

10. Note that it is important to make declarations of the functions that are defined in other files so that we can 
use them. For example, in the `main.cpp` file, we declare the `Log` function near the top of the file. The difference
between a declaration and a definition is that:
- a **declaration**, which only contains the function signature without its body/implementation, 
tells the compiler that the function exists, whereas
- a **definition** contains the function signature and its body/implementation.

11. When declaring the function in the `.cpp` file, the compiler basically trusts us that the function is defined 
somewhere else. If the function is not defined, the compiler will throw an error when it tries to link the object
files together. 

12. Each `.cpp` file will get compiled into individual `.o` object file. The object files will then get linked together
by the linker to create the final executable file. The linker will also link the standard library to the executable file.