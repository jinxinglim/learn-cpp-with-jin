## 9. Loops in C++ (for loops, while loops)

#### Youtube video

- https://youtu.be/_1AwR-un4Hk?si=MI-LiR1yuQkXs4En

#### Code

- [HelloWorld/](HelloWorld/)

#### Key takeaways

1. The `for` loop is a control flow statement that allows code to be executed repeatedly based on a condition.
    - The `for` loop has three parts:
        - The `initialization` part, which is executed once at the beginning of the loop.
        - The `condition` part, which is evaluated before each iteration of the loop. 
        If it evaluates to `true`, the loop body is executed. If it evaluates to `false`, the loop ends.
        - The `increment` part, which is executed after each iteration of the loop.
    - The syntax of the `for` loop is as follows:
        ```cpp
        for (initialization; condition; increment) {
            // code to be executed
        }
        ```
        See the `for` loop example 1 in [HelloWorld/src/main.cpp](HelloWorld/src/main.cpp) for an example.

2. Note that `initialization`, `condition`, and `increment` are all optional. 
    - For example, the following is a valid `for` loop:
        ```cpp
        for (;;) {
            // code to be executed
        }
        ```
        This loop will run indefinitely until it is interrupted.
        See the `for` loop example 2 in [HelloWorld/src/main.cpp](HelloWorld/src/main.cpp) for an example.

3. The `while` loop is another control flow statement that allows code to be executed repeatedly based on a condition.
    - The `while` loop evaluates the `condition` before each iteration of the loop. 
    If the condition evaluates to `true`, the loop body is executed. If it evaluates to `false`, the loop ends.
    - The syntax of the `while` loop is as follows:
      ```cpp
      while (condition) {
            // code to be executed
      }
      ```
      See the `while` loop example in [HelloWorld/src/main.cpp](HelloWorld/src/main.cpp) for an example.

4. To decide on which loop to use:
    - The `for` loop is generally used when:
        - the number of iterations is known beforehand, and
        - an initialization of a new variable is needed.
    - The `while` loop is generally used when:
        - the number of iterations is not known beforehand, and
        - an initialization of a new variable is not needed. 
        i.e., there is an existing variable that is being used prior to the loop.

5. There is an other variation of the `while` loop called the `do while` loop.
    - The `do while` loop first executes the loop body once, and then evaluates the 
    `condition` after each iteration of the loop. 
    If the condition evaluates to `true`, the loop body is executed again. 
    If it evaluates to `false`, the loop ends.
    - So the `do while` loop is guaranteed to execute at least once, even if the condition is `false`.
    - The syntax of the `do while` loop is as follows:
      ```cpp
      do {
            // code to be executed
      } while (condition);
      ```
      See the `do while` loop example in [HelloWorld/src/main.cpp](HelloWorld/src/main.cpp) for an example.
