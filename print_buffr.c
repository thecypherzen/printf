#include "main.h"


/**
 * print_buffr - prints content of buffer to stdout
 * @buffr: ptr to buffer in memory
 * Return: num of chars printed
 */
int print_buffr(char *buffr)
{
	return (write(1, buffr, _strlen(buffr)));
}
