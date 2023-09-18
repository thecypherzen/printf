#include "main.h"

/**
 * my_puts - prints a string to stdout
 * @str: ptr to string
 * Return: num of chars written.
 */
int my_puts(char *str)
{
	return (write(1, str, (int)strlen(str)));
}

/**
 * my_putchar - prints a char to stdout
 * @chr: the character to print.
 * Return: number of characters written to stdout
 */
int my_putchar(char chr)
{
        return (write(1, &chr, 1));
}

/**
 * format_chekr - Prints out put based on format specifier
 * @c: the char to print
 * Return: number of chars printed.
 */
int format_printr(va_list list, char chr)
{
	switch(chr)
	{
	case 'c':
		return (my_putchar(va_arg(list, int)));
	case 's':
		return (my_puts(va_arg(list, char *)));
	case '%':
		return (my_putchar('%'));
	default:
		return (0);
	}
}
