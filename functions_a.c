#include "main.h"

/**
 * my_puts - prints a string to stdout
 * @str: ptr to string
 * Return: num of chars written.
 */
int my_puts(char *str)
{
	if (!str)
		str = "(null)";
	return (write(1, str, _strlen(str)));
}

/**
 * my_putchar - prints a char to stdout
 * @chr: the character to print.
 * Return: number of characters written to stdout
 */
int my_putchar(char chr)
{
	if (chr)
		return (write(1, &chr, 1));
	else
		return (0);
}
/**
 * print_int - prints signed int to stdout
 * @n: the int value
 * @signed_int: 0 for unsigned, 1 for signed
 * Return: the number of digits printed
 */
int print_int(int n, int signed_int)
{
	unsigned int neg, div, fd, num;

	neg = 0, div = 1;

	if (!signed_int)
		num = (unsigned int)n;
	else if (n < 0)
	{
		my_putchar('-');
		neg++, num = n * (-1);
	}
	else
		num = n;
	fd = num / div;

	while (fd > 9)
		div *= 10, fd = num / div;

	while (div >= 1)
	{
		fd = ((num / div) % 10), div /= 10;
		neg += my_putchar(48 + fd);
	}
	return (neg);
}

/**
* format_printr - Prints out put based on format specifier
* @chr: the char to print
* @list: va_list of args.
* Return: number of chars printed.
*/
int format_printr(va_list list, char chr)
{
	if (chr == 'c')
		return (my_putchar(va_arg(list, int)));
	if (chr == 's')
		return (my_puts(va_arg(list, char *)));
	if (chr == '%')
		return (my_putchar('%'));
	if (chr == 'd' || chr == 'i')
		return (print_int(va_arg(list, int), 1));
	if (chr == 'u')
		return (print_int(va_arg(list, int), 0));
	if (chr == 'b' || chr == 'o' || chr == 'x' || chr == 'X')
	{
		char *hold;
		int n;
		_uint obase;

		obase = (chr == 'b' ? 2 : (chr == 'o' ? 0 : 1));
		hold = base_c(va_arg(list, _uint), obase, chr == 'x' ? 0 : 1);
		if (!hold)
			return (0);
		n = my_puts(hold), free(hold);
		return (n);
	}
	return (0);
}
