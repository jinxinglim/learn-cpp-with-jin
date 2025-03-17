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

4. If you take a look at the [`include/log.h`](HelloWorld/include/log.h) file, you will see that it has
a `#pragma once` directive at the top. This directive is a non-standard, but widely supported preprocessor
directive designed to serve as a header guard. It causes the current source file to be included only once 
in a single compilation. This is to prevent the header file from being included multiple times in the same
transitional unit, which can get errors like duplicate errors as we will be copying and pasting the same
content from the header files multiple times in the same file.

5. If you take a look at the [`include/`](HelloWorld/include/) directory, you will see that it has a
[`common.h`](HelloWorld/include/common.h) file that includes [`log.h`](HelloWorld/include/log.h) too.
If we comment out the `#pragma once` directive in the [`log.h`](HelloWorld/include/log.h) file, we will
get an error that says `redefinition of 'Player'`. This is because the `Player` class is defined in the
[`log.h`](HelloWorld/include/log.h) file, and when we include the [`log.h`](HelloWorld/include/log.h) file
in the [`common.h`](HelloWorld/include/common.h) file, the `Player` class is defined twice. This is why
we need the `#pragma once` directive in the header files.

6. Another way to have the header guard other than using `#pragma once` is to use the `#ifndef`, `#define`,
and `#endif` preprocessor directives. This may be seen in (older) C++ codebases that do not support `#pragma once`
as `#pragma once` is a newer directive as compared to the `#ifndef`, `#define`, and `#endif` directives.
To see how this is done, you can comment out the `#pragma once` directive in the [`log.h`](HelloWorld/include/log.h)
file and uncomment the `#ifndef`, `#define`, and `#endif` directives in the same file. You will see that the
code will still work as expected.

7. Basically, what it does is that it checks if the `LOG_H` macro is not defined, then it defines the `LOG_H`
macro and includes the content of the file. If the `LOG_H` macro is defined, it will not include the content
of the file. This is a way to prevent the header file from being included multiple times in the same transitional
unit.

8. Lastly, there are two ways to include the header files in the `.cpp` files:
    - Using angular brackets `#include <FILE>`: This is used to include the files that can be found in the
    include directories that are set in the `CMakeLists.txt` file and the system directories.
    - Using double quotes `#include "FILE"`: This is used to include the files using the relative path to
    the file and the include directories that are mentioned in the above point, i.e., everything.

9. We can see that the `iostream` header file does not have a `.h` extension. This is because due to some
practice in the past, those header files in the standard library without the `.h` extension are for the 
C++ standard library, whereas those with the `.h` extension are for the C standard library. However,
this is not a strict rule, and you can use the `.h` extension for the C++ header files if we want to.

