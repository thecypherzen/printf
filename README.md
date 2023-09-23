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

1. Education is when you read the fine print. Experience is what you get if you don't
mandatory
Score: 100.0% (Checks completed: 100.0%)
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

2. With a face like mine, I do better in print
#advanced
Score: 100.0% (Checks completed: 100.0%)
Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$


3. What one has not experienced, one will never understand in print
#advanced
Score: 100.0% (Checks completed: 100.0%)
Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

4. Nothing in fine print is ever good news
#advanced
Score: 100.0% (Checks completed: 100.0%)
Use a local buffer of 1024 chars in order to call write as little as possible.

Repo:

GitHub repository: printf

5. My weakness is wearing too much leopard print
#advanced
Score: 34.12% (Checks completed: 34.12%)
Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)


7. The big print gives and the small print takes away
#advanced
Score: 0.0% (Checks completed: 0.0%)
Handle the following flag characters for non-custom conversion specifiers:

+
space

8. Sarcasm is lost in print
#advanced
Score: 1.35% (Checks completed: 1.35%)
Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X


9. Print some money and give it to us for the rain forests
#advanced
Score: 1.19% (Checks completed: 1.19%)
Handle the field width for non-custom conversion specifiers.

10. The negative is the equivalent of the composer's score, and the print the performance
#advanced
Score: 1.19% (Checks completed: 1.19%)
Handle the precision for non-custom conversion specifiers.

