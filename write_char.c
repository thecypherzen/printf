#include "main.h"

/**
 * writechar - writes a char to buffer in memory
 * prototype - func(va_list list, char *buff, int *b_index)
 * @list: list of args
 * Return: 1 if written to buffer, -1 otherwise.
 */
int write_char(va_list list, ...)
{
	va_list local_args;
	char *buffr, chr;
	int *b_index, k;

	printf("char written ...\n");
	/* collect args from fxn */
	va_start(local_args, list);
	chr = va_arg(list, int);
	buffr = va_arg(local_args, char *);
	b_index = va_arg(local_args, int *);
	k = *b_index;
	va_end(local_args);
	if (chr == '\0')
		printf("char is null");
	/* if buffr is full, flush */
	if (!buffr)
		return (-1);
	if (k == 1024)
	{
		print_buffr(buffr, 1024);
		flush_buffr(buffr, 1024);
		k = 0, *b_index = k;
	}
	buffr[*b_index] = chr, *b_index = k + 1;
	return (1);
}
