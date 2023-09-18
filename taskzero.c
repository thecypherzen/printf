#include "main.h"


/**
 * _printf - produces output according to a format (for c, s and %).
 * @format: the formatting string
 * Return: number of chars printed to stdout.
 */
int _printf(const char *format, ...)
{
	int n;
	va_list list;

	n = 0;
	if (format)
	{
		va_start(list, format);
		while (*format)
		{
			if (*format == '%')
			{
				switch(*(format + 1))
				{
				case 'c':
					n += my_putchar(va_arg(list, int));
					format++;
					break;
				case 's':
					n += my_puts(va_arg(list, char *));
					format++;
					break;
				case '%':
					n += my_putchar('%');
					format++;
					break;
				}
			}
			else
				n += my_putchar(*format);
			format++;
		}
		va_end(list);
	}
	return (n);
}
