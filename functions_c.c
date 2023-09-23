#include "main.h"

/**
 * call_base_cal - calls base calculator function
 * @list: va_list
 * @chr: base format specifier
 * Return: number of bytes printed.
 */
int call_base_cal(va_list list, char chr)
{
	char *hold;
	int n;
	_uint obase;

	obase = (chr == 'b' ? 2 : (chr == 'o' ? 8 : 16));
	hold = base_c(va_arg(list, _uint), obase,
		      chr == 'x' ? 0 : 1);
	if (!hold)
		return (0);
	n = my_puts(hold), free(hold);
	return (n);
}
