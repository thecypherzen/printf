#include "main.h"

/**
 * get_sepecifiers - constructs format string.
 * @dest: memory location to store format string
 * @format: format string from _printf function
 * @idx: index of @format to start searching at.
 * Return: len of constructed format string
 */
int get_specifiers(char *dest, const char *format, int idx)
{
	char single[] = {'%', 'c', 's', 'i', 'd', 'o', 'u', 'b', 'x',
			'X', 'S', 'p', 'r', 'R'};
	char prefix[] = {'l', 'h', '#', '+', ' '}, c;
	int is_single, r, i, halt, k;

	i = is_single = r = k = halt = 0;
	while (i < 3)
	{
		c = check_specifier(format[i + idx], single, prefix,
				&is_single, r, &halt);
		if (!c)
		{
			printf("not found\n");
			dest[i] = '\0';
			return (i);
		}
		else
		{
			dest[i] = c;
			if (is_single || halt)
				return (++i);
		}
		i++, r++;
	}
	dest[i] = '\0';
	return (i);
}
