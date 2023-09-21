#include "main.h"

/**
 * printf_fail - handles failure of printf
 * @idx: next index @ failure time
 * @buffr: ptr to buffr
 * @list: va_list
 * Return: -1 always
 */
int printf_fail(int idx, char *buffr, va_list list)
{
	if (idx < 1024)
		buffr[idx] = '\0', printf_buff(buffr);
	free(buffr);
	return (-1);
}
