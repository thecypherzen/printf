#include "main.h"

/**
 * printf_fail - handles failure of printf
 * @idx: next index @ failure time
 * @buffr: ptr to buffr
 * @list: va_list
 * Return: -1 always
 */
int printf_failed(char *buffr, int size)
{
	print_buffr(buffr, size);
	free(buffr);
	return (-1);
}
