#include "main.h"

/**
 * write_base_res - wites the result of base conversion to buffer
 * @list - va_list of arguments
 * @buffr - memory location to write
 * @b_index - index of buffr to start writing
 * Return: number of chars written, -1 if error
 */
int write_base_res(va_list list, ...)
{
	(void)list;
	printf("Base res written...\n");
	return (0);
}
