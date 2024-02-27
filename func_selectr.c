#include "main.h"

/**
 * func_selectr - selects a function based on format specifier passed in
 * @list: va_arg list from calling func
 * @fmtstr: format specifier string
 * @buffr: location to write results
 * @b_index: buffr index to start writing at
 * Return: number of chars written to buffr on success, -1 otherwise.
 */
int func_selectr(va_list list, char *fmtstr, char *buffr, int *b_index)
{
	fs_type funcs[] =
	{
		{"c", write_char}, {"s", write_str}, {"S", write_S},
		{"r", write_rev_str}, {"R", write_rot}, {"%", write_char},
		{"udi", write_int}, {"xoXpb", write_base_res}, {NULL, NULL}
	};
	int i, j, k, q, is_int, is_hex, (*f)(va_list list, ...);
	char c, *str;

	q = 0;
	for (i = 0; funcs[i].flag && !q; i++)
	{
		for (j = 0; str = funcs[i].flag, str[j] && !q; j++)
		{
			for (k = 0; c = str[j], fmtstr[k] && !q; k++)
			{
				if (c == fmtstr[k])
				{
					is_int = (c == 'u' || c == 'd' ||
						  c == 'i') ? 1 : 0;
					is_hex = (c == 'x' || c == 'X' ||
						  c == 'o' || c == 'p' ||
						c == 'b') ? 1 : 0;
					f = is_int && !is_hex ? funcs[i].func :
						(is_int && is_hex ?
						 funcs[i].func : funcs[i].func);
					q = is_int || is_hex ? 1 : 2;
				}
			}
		}
	}
	if (q)
		return (q == 2 ? f(list, buffr, &b_index) :
			f(list, buffr, &b_index, fmtstr));
	return (-1);
}
