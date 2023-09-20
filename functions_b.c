#include "main.h"

/**
 * base_c - converst an unsigned int from decimal to other base.
 * @n: the unsigned int
 * @obase: output base - 0: decimal, 1: oct, 2: bin, 16 otherwise
 * @is_upper: sets if result should be uppercase (1) or lowercase (0)
 * Return: ptr to output string
 */
char *base_c(_uint n, _uint obase, int is_upper)
{
	_uint i, rem, quo, alpha[6] = {97, 98, 99, 100, 101, 102};
	_uint digits[6] = {10, 11, 12, 13, 14, 15};
	char *buff;

	buff = malloc(sizeof(char) * 65);
	if (!buff)
		return (NULL);

	/*assign divisor based on obase */
	i = 0;
	if (n == 0)
	{
		buff[0] = 48, buff[1] = '\0';
		return (buff);
	}
	while (n > 0)
	{
		quo = n / obase;
		rem = get_rem(digits, alpha, n % obase, is_upper);
		buff[i] = rem, i++;
		n = quo;
	}
	buff[i] = '\0', rev_string(buff);
	return (buff);
}

/**
 * get_rem - returns the remainder from base division
 * @digits: array of digits from 10 - 15
 * @alpha: array of corresponding alpha for 10 - 15
 * @n: the number to check remainder of
 * @is_upper: 1 if alpha value of n to be uppercase, 0 otherwise
 * Return: ascii value of remainder.
 */
_uint get_rem(_uint *digits, _uint *alpha, _uint n, int is_upper)
{
	_uint k;

	k = 0;
	if (n > 9)
	{
		while (digits[k] != n)
			k++;
		return (is_upper ? alpha[k] - 32 : alpha[k]);
	}
	return (n + 48);
}

/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char temp;

	len = _strlen(s) - 1; /* get string length */
	for (i = 0; i <= len; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = temp;
		len--;
	}
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
		len++, s++;
	return (len);
}
/**
 * print_S - prints a non standard string(S) to stdout
 * @str: the string to print
 * Return: number of characters printed.
 */
int print_S(char *str)
{
	char *buff, *prfx = "\\x";
	int n;

	n = 0;
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			n += my_puts(prfx);
			if (*str < 16)
				n += my_putchar(48);
			buff = base_c(*str, 16, 1);
			if (!buff)
				return (3);
			n += my_puts(buff);
			free(buff);
		}
		else
			n += my_putchar(*str);
		str++;
	}
	return (n);
}
