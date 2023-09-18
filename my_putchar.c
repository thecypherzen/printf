#include "main.h"

/**
 * my_putchar - prints a char to stdout
 * @chr: the character to print
 * Return: number of characters written to stdout
 */
int my_putchar(char chr)
{
	return (write(1, &chr, 1));
}
