# Overview #

The famous printf project is a student-implementation of the printf function, that mimics the printf function in C. It's one of the projects done at ALX Software Engineering program, in partial fulfilment of the requirements for graduation and progress.

### Project Timeline ###
- **Released:** Fri 15 Sep 2023.
- **1st Deadline:** Wed 20 Sept 2023.
- **Duration:** 5 days.

### Collaborators ###
- [William Inyam](https://github.com/thecypherzen/)
- [Francis The Boss](https//github.com/theboss/)

### Technologies ##
- All C files written to be C-89 compatible
- Compiled with gcc 9.4.0
- Code tested on Ubuntu 20.04 LTS.

### Files ###
Files on the project are task based and are as follows:
| SN | File | Description |
|----|------|-------------|
| 1. |[taskzero.c](https://github.com/) | A function that produces output to stdout according to a format.</br><ul><li>Returns the number of characters printed (excluding the null byte used to end output to strings).</li></ul>**Handled**</br><ul><li>c, s and % specifiers.</li></ul>**Not handled**</br><ul><li>buffer handling of C Library printf function.</li><li>flag characters, field width, precision and length modifiers.</li></ul>|
| 2. | Pending |

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Score: 85.9% (Checks completed: 85.9%)
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers