# Printf project for Holberton School

This project is about Printf function. We have to write a function that produces output according to a format and handles the following conversion specifiers: c, s, %, d, i.

## Getting Started

To start the project, we read the Holberton School intranet to understand what we have to do, read the general requirements and the prototypes they are asking us to use.

## Prerequisites

The following are the software prerequisites for the project:
Virtual Machine
Ubuntu
Vagrant
gcc compiler
Betty (Holberton School corrector for proper code writing).

### Constructing

First, we create the header file holberton.h to define the functions prototypes we are going to use and create the structure.
Then, we create the functions_task_0.c file to define the function behavior of every prototype in the header. Finally, we create the _printf.c that includes the main function to print the output.

## Running the tests

To run the tests, we compile the program with the following compiler:

```
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
```
Afterwards, we execute the a.out file to see if the output is working correctly.

### Break down into end to end tests

To make sure the code is working correctly, we used some edge cases to test the output of the limits of the functions. For example, to test the %d conversion specifier we used the following negative limit for an integer.

```
_printf("%d\n", -2147483648);
-2147483648
```

## Authors

* **David Ortiz**
* **Oscar Rodriguez**

## Acknowledgments

* Special thanks to Gonzalo Millan and Arturo Victoria for sharing their knowledge with us.
