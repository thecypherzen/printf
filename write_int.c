#include "main.h"


/**
 * write_int - writes an int to  a buffer in memory
 * @list - va_list of arguments
 * @buffr - memory location to write
 * @b_index - index of buffr to start writing
 * Return: number of chars written, -1 if error
 */
int write_int(va_list list, ...)
{
	(void)list;
	printf("int written...\n");
	return (0);
}
