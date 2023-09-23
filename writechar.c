#include "main.h"

/**
 * writechar - writes a char to buffer in memory
 * prototype - func(int b_index, va_list args, char *buff)
 * @b_index: buffer index for current write operation
 * Return: next index of buffer on success, -1 on failure.
 */
int writechar(va_list list, int b_index, ...)
{
	va_list local_args;
	char *buffr, chr;

	/* collect args from fxn */
	va_start(local_args, b_index);
	chr = va_arg(list, int);
	buffr = va_arg(local_args, char *);

	/* if buffr is full, exit else write chr */
	if (b_index == 1024)
	{
		va_end(local_args);
		return (-1);
	}
	buffr[b_index] = chr, va_end(local_args);
	return (++b_index);
}
