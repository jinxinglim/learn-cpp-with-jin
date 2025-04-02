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

7. Even though boolean values are stored as 1 and 0 in the memory, it occupies 1 byte of memory instead of 1 bit (as mentioned
in one of the previous lessons). Because of that, the boolean condition in the `if` statement will be evaluated to true if the
value is not 0 (i.e., can be 1, 123 or any non-zero value) and false if the value is 0.

8. This comes especially helpful if we want to check if a pointer is `nullptr` or not. If the pointer is `nullptr`, it will be
evaluated to false and if it is not `nullptr`, it will be evaluated to true.

9. If the body of the `if` statement contains only one line of code, we can omit the curly braces `{}`. However, it is
recommended to always use the curly braces to avoid any confusion and bugs in the code. Same applies to `else` statements.

10. We can also use `else if` statements to check for multiple conditions. The `else if` statement will only be evaluated
if the previous `if` statement is false. If the previous `if` statement is true, the `else if` statement will be skipped.
It is important to make sure when to use `else if` and when to use multiple `if` statements. This is because `else if` will
only be evaluated if the previous `if` statement is false. If we want to check for multiple conditions regardless of the
previous conditions, we should use multiple `if` statements.

