n C programming language, a variadic function is a function that can accept a variable number of arguments. These functions are defined using the ellipsis (...) notation in the function declaration.

A typical example of a variadic function in C is the printf() function, which can accept any number of arguments depending on the format string used. Another example is the scanf() function, which can accept any number of input values depending on the format string used.

To define a variadic function, you need to include the stdarg.h header file, which provides macros and functions to access the variable arguments. The va_start() macro initializes a va_list object, which can then be used to iterate over the variable arguments using the va_arg() macro. Finally, the va_end() macro cleans up the va_list object after the variable arguments have been processed.

It is important to note that variadic functions are not type-safe, and it is the responsibility of the programmer to ensure that the correct number and types of arguments are passed to the function. Misuse of variadic functions can lead to undefined behavior, so care must be taken when using them.

Overall, variadic functions are a powerful feature of C that allow for flexible and extensible code, but they should be used with caution to avoid potential bugs and errors.

In this project the following tasks where done:

Task 0: Write a function that returns the sum of all its parameters.

Task 1: Write a function that prints numbers, followed by a new line.

Task 2: Write a function that prints strings, followed by a new line.

Task 3: Write a function that prints anything.

