## 3. How the C++ compiler works

#### Youtube video

- https://youtu.be/3tIqpEmWMLI?si=j-0lV-xGkdleuwyz 

#### Code

- [HelloWorld/](HelloWorld/)
- [temp/](temp/)

#### Key takeaways

1. Brief summary of what the compiler does:
    i. Preprocess our code, i.e., preprocess all the preprocess statements and get evaluated.
    ii. Tokenizing, parsing and sorting out our textual C++ code into a format that our compiler can understand follow next.
    This results in a representation that is called an abstract syntax tree (AST) being created.
    iii. This is then get converted into constant data or instructions, which are actual machine code
    that our CPU can execute.

2. C++ does not care and recognize about files. These C++ files are just translation units. **Files are
not something that "exists" and has no meaning in C++**, unlike programming language like Java where file names hierachy of
the files matters. 

3. Even though there is convention that `.cpp` files are C++ files, `.h` are header files, etc, we can
always tell the compiler on what files to compile.

4. All the files that are going to be compiled, in this case the `.cpp` files, will be compiled as 
translation units and result in object files.

5. Recall that statements that begin with `#` are preprocess statements that will be preprocessed before
the code is compiled. We mentioned that `#include <file>` is a preprocess statement that tells the compiler
to open that file, read the contents of the file and paste them into the current file. Here is an example:
    - In the [temp](temp/) directory, we have the following files:
        - `endbrace.h`
        - `math.cpp`
    - The `endbrace.h` file just contains a single end brace `}` while the `math.cpp` file contains the following:
    ```
    int Multiply(int a, int b) {
        return a * b;
    #include "endbrace.h"

    int main() {
        Multiply(3, 5);
    }  
    ```  
    - When we compile the `math.cpp` file with `clang++ math.cpp -o math`, the compilation will work fine
    as the contents of `endbrace.h` file, i.e., `}` is included in the `math.cpp` file.

6. We can even ask the compiler to output the interface file to see how the preprocess statements are
being processed. For example, when we compile the `math.cpp` file with `clang++ -E math.cpp -o math.i`,
we can see the `math.i` file that contains the contents of the `math.cpp` file after the preprocess
statements are processed.

7. Let us take a look at the preprocessed file of [`HelloWorld/src/main.cpp`](HelloWorld/src/main.cpp) file
by first running `clang++ -E src/main.cpp -o src/main.i` at the [`HelloWorld/`](HelloWorld/) directory.
We can see that the file is huge, spanning over 30+K lines. This is because the `main.cpp` file includes
the `iostream` header file which contains a lot of code. Hence, it is always a good practice to include
only the necessary header files.

8. Here is a list of some of the preprocess statements that we can use:
    - `#include <file>`: Include the contents of the file into the current file.
    - `#include "file"`: Include the contents of the file into the current file.
    - `#define`: Define a macro.
    - `#ifdef`, `#ifndef`, `#else`, `#endif`: Conditional compilation.
    - `#error`: Emit an error message.
    - `#pragma`: Implementation-specific directive.
    - `#line`: Set the line number.
    - `#undef`: Undefine a macro.
    > You can find more details on preprocess statements [here](https://www.geeksforgeeks.org/cpp-preprocessors-and-directives/).

9. Once the preprocess statements are processed, the compiler can then compile the code into object files.
To see that, let us go back to our [`temp/`](temp/`) directory and compile the `math.cpp` file into an object 
file with the command `clang++ -c math.cpp -o math.o`. We can see that the `math.o` file is created.

10. As the object file is in binary format, a better view would be through the assembly code.
To do that, we can run `objdump -d math.o` to see the assembly code of the object file. We can see
where the `Multiply` function is defined and how the `main` function is called, which also include 
the assembly code for each function.