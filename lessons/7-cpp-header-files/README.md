## 7. C++ Header Files

#### Youtube video

- https://youtu.be/9RJTQmK0YPI?si=YhDcaIHvu5ltXEKG

#### Code

- [HelloWorld/](HelloWorld/)

#### Key takeaways

1. Header files are a way (traditionally) to separate the declaration of a function from its implementation.
    - The declaration of a function is the function signature, i.e., the return type, the function name, 
    and the parameters.
    - The implementation of a function is the body of the function, which supposed to be written just once.
    - By separating the declaration from the implementation, we can include the header file in multiple 
    files without having to rewrite the function signature.
    - By retrieving the function signature from the header file and having its implementation written once 
    in some `.cpp` file, after compilation and linking, the function will be available to all files that
    include the header file.
    - This is useful for large projects where we have many files that need to use the same functions.
    - The header file has the extension `.h` or `.hpp`.
    - The implementation file has the extension `.cpp`.

2. It is a good practice to separate the header files from the implementation files in different directories.
    - The header files are placed in the `include` directory.
    - The implementation files are placed in the `src` directory.

3. Suppose you made a function declaration in a header file like what we see in the 
[`HelloWorld/include/log.h`](HelloWorld/include/log.h) file. When you include this header file in
a `.cpp` file, we have to pass in the relative path to the header file, e.g., `#include "../include/log.h"`. 
This is because the compiler will look for the header file in the same directory as the `.cpp` file. 
However, you can set the `include_directories` in the `CMakeLists.txt` file to tell the compiler where to
look for the header files. This way, you can include the header file like this without its relative path 
(which can be troublesome to retrieve at times): `#include "log.h"`.

#### 👷 WIP - Stop at 7:00 👷