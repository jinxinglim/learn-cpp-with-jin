## 6. Functions in C++

#### Youtube video

- https://youtu.be/V9zuox47zr0?si=hAM4DOjZZP9szR6f

#### Code

- [HelloWorld/](HelloWorld/)

#### Key takeaways

1. Functions are a way to organize our code into reusable blocks. 
They are defined by a name, a return type, a list of parameters, and a body. 
    - The _name_ is used to call the function.
    - The _return type_ is the type of data that the function will return. 
    If the function does not return anything, the return type is `void`.
    - The _parameters_ are the data that the function will take in to perform its operations.
    - The _body_ is the block of code that the function will execute.
    - Template:
    ```cpp
    <return type> <function name>(<parameters>) {
        <body>
    }
    ```
    - Examples of functions can be found in the code [HelloWorld/](HelloWorld/).

2. Whenever we are calling a function, we are creating a new stack frame.
    - A stack frame is a block of memory that is allocated on the stack for a function call.
    - It contains the parameters, local variables, and the return address of the function.
    - It will jump to a different part of the binary in order to start executing the instructions 
    from the function.
    - When the function is done executing, the stack frame is deallocated and the program returns 
    to the return address that it previously were before we call the function, i.e., the previous
    stack frame.

3. Thus, there are a lot of jumping around memory when we are calling functions. Thus, we need to
be careful not to overdo the creating of too many functions as it will take time and slow down our program.
There also could be cases of memory leaks or stack overflows if we are not careful.

4. One way to prevent this is to use the `inline` keyword to tell the compiler to inline the function. 
    - Inlining a function means that the compiler will copy the body of the function wherever the function is called.
    - This is useful for small functions that are called many times in our program.
    - However, inlining a function will increase the size of our binary, so we should only inline functions that are called many times.

5. The goal of functions is to make sure we do not have too many duplicate code in our program. 
    - For example, if we have a block of code that we want to run multiple times, we can put it in a function.
    - If we have a block of code that we want to run in different parts of our program, we can put it in a function.
    - If we have a block of code that we want to run in different programs, we can put it in a function.

6. Except for the `main` function, if we declare a return type for a function, we need to return a value of that type.
    - If we do not return a value, the compiler will give us an error.
    - If we do not want to return anything, we can declare the return type as `void`.

7. As mentioned above, only the `main` function does not need a return statement. 
    - The `main` function is the only function that does not need to return a value.
    - By default, if we do not return anything in the `main` function, it will return `0` 
    which means that the program ran successfully.
