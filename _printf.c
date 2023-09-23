#include "main.h"

/**
 * _printf - produces output according to a format (for c, s and %).
 * @format: the formatting string
 * Return: The number of chars printed to stdout.
 */
int _printf(const char *format, ...)
{
	int n;
	va_list list;

	n = 0;
	if (!format || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	if (!(*format))
		return (n);

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			/**
			 *if (*(format + 1) == '\0')
			 *{
			 *	va_end(list);
			 *	return (-1);
			 *}
			 */
			n += format_printr(list, *(format + 1));
			format++;
		}

		else
			n += my_putchar(*format);
		format++;
	}
	va_end(list);
	return (n);
}
