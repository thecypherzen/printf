#include "main.h"

/**
 * flush_buffr - resets memory location to null
 * @buffr: the memory location
 * Return: void.
 */
void flush_buffr(char *buffr, int size)
{
	int i = size;

	while (i-- >= 0)
		buffr[i] = '\0';
}
