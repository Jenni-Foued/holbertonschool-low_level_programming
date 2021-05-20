# <div align="center">0x0F. C - Function pointers</div>

## About

   - What are function pointers and how to use them
   - What does a function pointer exactly hold
   - Where does a function pointer point to in the virtual memory

## Files & Descriptions

[0-print_name.c](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x0F-function_pointers/0-print_name.c)  a function that prints a name

[1-array_iterator.c](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x0F-function_pointers/1-array_iterator.c)  a function that executes a function given as a parameter on each element of an array

[2-int_index.c](2-int_index.c)  a function that searches for an integer

Task 3: a program that performs simple operations

Usage: `calc num1 operator num2`

Operator is one of the following:

   - +: addition
   - -: subtraction
   - *: multiplication
   - /: division
   - %: modulo

[3-calc.h](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x0F-function_pointers/3-calc.h)  contain all the function prototypes and data structures used by the program

[3-get_op_func.c](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x0F-function_pointers/3-get_op_func.c)  this file contain the 5 following functions:

   - `op_add`: returns the sum of a and b. Prototype: `int op_add(int a, int b)`;
   - `op_sub`: returns the difference of a and b. Prototype: `int op_sub(int a, int b)`;
   - `op_mul`: returns the product of a and b. Prototype: `int op_mul(int a, int b)`;
   - `op_div`: returns the result of the division of a by b. Prototype: `int op_div(int a, int b)`;
   - `op_mod`: returns the remainder of the division of a by b. Prototype: `int op_mod(int a, int b)`;

[3-main.c](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x0F-function_pointers/3-main.c)  main function

[3-op_functions.c](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x0F-function_pointers/3-op_functions.c)  function that selects the correct function to perform the operation asked by the user

[100-main_opcodes.c](https://github.com/Jenni-Foued/holbertonschool-low_level_programming/tree/master/0x0F-function_pointers/100-main_opcodes.c)  a program that prints the [opcodes](https://en.wikipedia.org/wiki/Opcode) of its own main function
