## 5. Variables in C++

#### Youtube video

- https://youtu.be/zB9RI8_wExo?si=71W5XhIUbVb4hFFh

#### Code

- [HelloWorld/](HelloWorld/)

#### Key takeaways

1. Variables are just data that we want to manipulate in our program. They are stored in memory - in
one of two places: stack or heap.

2. There are many primitive data types in C++ such as `int`, `float`, `double`, `char`, `bool`, etc.  
Essentially, the main difference between them is the amount of memory they take up and the range of
values they can store. Here is a reference to some of the important ones: 
https://www.geeksforgeeks.org/cpp-data-types/.

3. For example, `int` is used to store signed integers that takes up 4 bytes of memory. It can store
values from -2,147,483,648 to 2,147,483,647. To understand how we get these values, we need to know 
that each byte is 8 bits and each bit can store a 0 or a 1. So, 4 bytes = 4 * 8 = 32 bits. The
first bit is used to store the sign of the number (0 for positive, 1 for negative) and the rest of
the bits are used to store the number itself. So, the range of values that can be stored is from
-2^(31) to 2^(31) - 1.

3. There are also data type modifiers such as `signed`, `unsigned`, `short`, `long`, etc. that can
be used to modify the range of values that can be stored in a variable. For example, `unsigned int`
can store values from 0 to 4,294,967,295 (without allocating a bit for the sign of the number).
Here is a reference on the modifiers: https://www.geeksforgeeks.org/cpp-type-modifiers/.

4. Another important data type is `char` which is used to store a single character. It takes up 1 byte
of memory and essentially store numbers that represent characters. For example, the number 65
represents the character 'A'. This is because of the ASCII table which is a standard way to represent
characters in computers. Here is a reference to the ASCII table: https://www.asciitable.com/.

5. In fact, all data in a computer is stored as numbers. The type of data is determined by the way we
interpret the numbers. For example, the number 65 can be interpreted as an integer, a character, a
floating point number, etc. depending on the context.

6. There are 2 main ways we can declare variables for decimal numbers: `float` and `double`. 
    - `float`: takes up 4 bytes of memory and can store values from 1.2E-38 to 3.4E+38 with 6
    decimal places of precision. To indicate a float, we can use the `f` or `F` suffix even if 
    we have declared it as `float`, e.g., `3.14f`. If we do not use the suffix, the number will be interpreted
    as a `double`. 
    - `double`: takes up 8 bytes of memory and can store values from 2.3E-308 to 1.7E+308 with 15
    decimal places of precision. By default, any decimal number is interpreted as a `double`.

7. Lastly, there is the `bool` data type which is used to store boolean values - `true` or `false`.
It takes up 1 byte of memory and can store values 0 or 1. In C++, `0` is interpreted as `false` and
any other number is interpreted as `true`. 
    - Note that even though it actually needs only 1 bit of memory, it takes up 1 byte because of
    the way memory is allocated in computers, i.e., we can only access memory in bytes.

8. There is a way to find the size of a data type in C++ using the `sizeof` operator, which will 
return the number of bytes a data type takes up in memory. For example, `sizeof(int)` will return 
4 because an `int` takes up 4 bytes of memory. This is useful when we want to know how much memory 
a variable will take up in our program.



