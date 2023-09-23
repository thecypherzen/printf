#include "main.h"

/**
 * _printf - produces output according to a format (for c, s and %).
 * @format: the formatting string
 * Return: number of chars printed to stdout.
 */
int _printf(const char *format, ...)
{
	int n, k, l;
	va_list list;
	char *buffr, *fmtstr;

	n = k = 0;
	buffr = malloc(1024), fmtstr = malloc(4);
	if (!buffr || !format || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	if (!(*format))
		return (n);
	va_start(list, format);
	while (format[k])
	{
		if (format[k] == '%')
		{
			printf(" (%%) identified -> next: (%c) > ", format[k+1]);
			if ((format[++k]) == '\0')
				return (printf_failed(buffr, n));
			l = get_specifiers(fmtstr, format, k);
			k += l;
			printf("%s > %d chars long\n", fmtstr, l);
			/*current_func = f_selectr(format, k); */
			reset_specifiers(fmtstr, 4);
		}
		else
			/*n = writechar(list, n, buffr); */
			printf("\n");
		k++;
	}
	buffr[n] = '\0', print_buffr(buffr, n);
	free(buffr), va_end(list);
	return (n);
}
