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
    - In the [temp](src/3-how-the-cpp-compiler-works/temp) directory, we have the following files:
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

#### 👷‍♂️ WIP - Stops at 8m39s 👷‍♂️