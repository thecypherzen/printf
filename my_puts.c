#include "main.h"

/**
 * my_puts - prints a string to stdout
 * @str: ptr to string
 * Return: num of chars written.
 */
int my_puts(char *str)
{
	return (write(1, str, (int)strlen(str)));
}
