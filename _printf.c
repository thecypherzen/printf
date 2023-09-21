#include "main.h"

/**
 * _printf - produces output according to a format (for c, s and %).
 * @format: the formatting string
 * Return: number of chars printed to stdout.
 */
int _printf(const char *format, ...)
{
	int (*current_func)(int, ...), n, k;
	va_list list;
	char *buffr;

	buff = malloc(sizeof(char) * 1024);
	if (!buffr || !format || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	if (!(*format))
		return (n);
	va_start(list, format), n = k = 0;
	while (format[k])
	{
		if (format[k] == '%')
		{
			if ((format[++k]) == '\0')
				return (printf_fail(n, buffr, list));
			current_func = f_selectr(format, k);
		}
		else
			n = writechar(n, list, buff);
		k++;
	}
	buffr[n] = '\0', print_buffr(buffr), free(buffr);
	va_end(list);
	return (n);
}
