#include "main.h"

/**
 * check_specifier - checks if a char is a valid format specifier
 * @c: the char
 * @single: ptr to single char specifier's array
 * @prefix: ptr to prefixes for specifiers
 * @is_single: 1 if char is found in single's array. 0 otherwise
 * @r: the current iteration of search
 * @halt: end string creation process.
 * Return: 0 always
 */
char check_specifier(char c, char *single, char *prefix,
		 int *is_single, int r, int *halt)
{
	int i = 0;

	while (single[i] != '\0')
	{
		if (c == single[i])
		{
			if (r == 0)
			{
				*is_single = 1;
				return (c);
			}
			else if (r == 1)
			{
				*halt = 1;
				if (c != 'c' && c != 's' && c != 'b' && c != 'S'
				    && c != 'p' && c != 'r' && c != 'R')
					return (c);
			}
			if (r == 2 && (c != 'c' && c != 's' && c != 'b' &&
				       c != 'S' && c != 'p' && c != 'r' &&
				       c != 'R' && c != '%' && c != ' '))
				return (c);
			return ('\0');
		}
		i++;
	}
	i = 0;
	while (prefix[i] != '\0')
	{
		if (prefix[i] == c)
			return (c);
		i++;
	}
	return ('\0');
}
