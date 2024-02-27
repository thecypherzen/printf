#include "main.h"

/**
 * _printf - produces output according to a format (for c, s and %).
 * @format: the formatting string
 * Return: number of chars printed to stdout.
 */
int _printf(const char *format, ...)
{
	int b_index, n, k, l;
	va_list list;
	char *buffr, *fmtstr;

	b_index = n = k = 0;
	buffr = malloc(1024), fmtstr = malloc(4);
	if (!buffr || !format || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	if (!(*format))
		return (n);
	va_start(list, format), flush_buffr(buffr, 1024);
	while (format[k])
	{
		if (format[k] == '%')
		{
			printf("k UPPER: %d\n", k);
			if ((format[++k]) == '\0')
				return (printf_failed(buffr, b_index));
			l = set_specifiers(fmtstr, format, k);
			printf("k MIDDLE AFTER 1ST ++k: %d\n", k);
			printf("specifier: %s(%d) | ", fmtstr, l);
			printf("n before: %d\n", n);
			l = func_selectr(list, fmtstr, buffr, &b_index);
			printf("n after: %d >> (RETURNED: %d **)\n", n, l);
			flush_buffr(fmtstr, 4);
			k++;
			printf("k AFTER 2ND k++: %d\n", n);
			printf("******************************\n\n");
		}
		else
		{
			printf("ELSE EXECUTED\n");
			n += write_char(list, buffr, &b_index);
		}
		k++;
	}
	print_buffr(buffr, b_index);
	printf("\n");
	free(buffr), free(fmtstr), va_end(list);
	return (n);
}
