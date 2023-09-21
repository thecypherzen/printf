#include "main.h"

/**
 * f_selectr - selects a function based on format specifier passed in
 * @c: format specifier
 * @buff: buffer ptr to print result
 * @buff_i: index of buffer to start printing
 * Return: ptr to the function on success. NULL otherwise.
 */
int (*f_selectr(char *str, int idx))(int, ...)
{
	fs_type funcs[] = {
		{"c", writechar}, {"s", writestr},
		{NULL, NULL}
	};
	int i, j, k;
	char *fmtstr, c;

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

/**
 * fmtstr_makr - makes a format sub-string from format string
 * @str: format string
 * @k: index to start from
 * Return: NULL on failure, ptr to substring on success
 */
char *fmtstr_makr(char *str, int k)
{
	int j;
	char *fmtstr;

	fmtstr = malloc(sizeof(char) * 4);
        if (!fmtstr)
                return (NULL);

        for (j = 0; j < 3; j++, k++)
                fmtstr[j] = str[k];
        fmtstr[j] = '\0', printf("format str: %s\n", fmtstr);
	return (fmtstr);
}
