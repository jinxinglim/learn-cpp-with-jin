## 8. Conditions and Branches in C++ (if statements)

#### Youtube video

- https://youtu.be/qEgCT87KOfc?si=X5Xze82_4cmfM8sR

#### Code

- [HelloWorld/](HelloWorld/)

#### Key takeaways

1. There are 2 main things when we run a `if` statements:
    - The **condition** that we put in the `if` statement which will be evaluated
    - The **branch** (of code block) that will be jumped to and executed depending on the evaluation of the condition

2. During runtime, all executable code will be stored in the memory as instructions. When the program is running, 
the CPU will execute these instructions one by one. When the CPU encounters an `if` statement, it will evaluate 
the condition. If the condition is true, the CPU will jump to the instructions defined from the branch of code 
that is inside the `if` statement and execute it. If the condition is false, the CPU will skip these intructions
defined from the branch of code that is inside the `if` statement and continue executing the next instruction.

3. Due to the jumping around of code with `if` statements, it will definitely create some overhead when executing
the program. Thus, it is important to use the `if` statements wisely and not to overuse them if we want to write
optimized code.

4. Conditions in `if` statements can be defined by:
    - **Comparison operators**: `==`, `!=`, `>`, `<`, `>=`, `<=`
    - **Logical operators**: `&&`, `||`, `!`
    - **Bitwise operators**: `&`, `|`, `^`, `~`, `<<`, `>>`
    - **Ternary operator**: `? :`
    More on these operators can be found over [here](https://www.geeksforgeeks.org/operators-in-cpp/).

5. Comparison operators such as `==` are often overloaded in C++ classes. This means that we can define our own
implementation of the `==` operator for our own classes. This is useful when we want to compare two objects of
the same class. To know more about overloading operators, you can check out [this link](https://www.geeksforgeeks.org/operator-overloading-cpp/).

6. [Extra] In the video, The Cherno went through how to go through the values of the variables in VS Code's Debug mode.
But as I am not relying on VS Code Debug mode, I have written a simple `DebugLog` function in the `log.h` to print out
the value of the variables. This is useful when we want to debug our code and see the value of the variables at runtime.
I would still recommend to follow his steps in the video to see how to use the Debug mode in VS Code as it provides better
insights through the assembly code.

👷👷👷 WIP - Stop at 10:05 👷👷👷