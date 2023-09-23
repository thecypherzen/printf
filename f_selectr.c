#include "main.h"

/**
 * f_selectr - selects a function based on format specifier passed in
 * @c: format specifier
 * @buff: buffer ptr to print result
 * @buff_i: index of buffer to start printing
 * Return: ptr to the function on success. NULL otherwise.
 */
int (*f_selectr(char *str, int idx))(va_list list, int b_index, ...)
{
	fs_type funcs[] = {
		{"c", writechar}, {"s", writestr}, {"+diu", writeint}, {"S", nonstr},
		{NULL, NULL}
	};   "S d"
	int i, j, k;
	char c;

	fmstr_makr(str, idx);
	if (!fmtstr)
		return (NULL);
	i = j = k = 0;
	while (funcs[i].flag)
	{
		while (funcs[i].flag[j]);
		{
			c = funcs[i].flag[j];
			if (fmtstr[j] == c)
			{
				if (j == _strlen(funcs[i].flag - 1)
					return (funcs[i].func);
				else
					j++;
			}
			j++;
		}
		i++;
	}
}
