#include "main.h"
#include <limits.h>

/**
 * main - Test printf codes
 * Return: 0 always.
 */
int main(void)
{
	int len, len2, len3, len4;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	len = _printf("_pf-> Let's try to printf a simple sentence.\n");
	len2 = printf(" pf-> Let's try to printf a simple sentence.\n\n");

	_printf("_pf->\t%s%%s\n", "", "hall of fame");
	printf(" pf->\t%s%%s\n\n","");

	len3 = _printf("_pf->\tLength:[%d, %i]\n", len2, len2);
	len4 = printf("  pf->\tLength:[%d, %i]\n\n", len2, len2);
	printf("pf->\tlen3: %d(%i) | len4: %d(%i)\n", len3, len3, len4, len4);
	_printf("_pf->\tlen3: %d(%i) | len4: %d(%i)\n\n", len3, len3, len4, len4);

	len = _printf("-pf->\tNegative: [%d(%i)]\n", -762534, -762534);
	len2 = printf(" pf->\tNegative: [%d(%i)]\n", -762534, -762534);
	printf("_pf->len: %d | pf->len: %d\n\n", len, len2);

	_printf("_pf->\tString:[%s]\n", 27343434);
	printf("  pf->\tString:[%s]\n\n", "27343434");

	_printf("_pf->\tCharacter:[%c]\n", 97);
	printf(" pf->\tCharacter:[%c]\n", 97);
	printf("\n");

	len = _printf("_pf->\tPercent:[%%]");
	printf(" | ");
	len2 = printf(" pf->\tPercent:[%%]");
	printf("\n");

	_printf("_pf->\tLen:[%d] | ", len);
	printf("  pf->\tLen:[%d]\n", len2);
	printf("\n");

	len = _printf("_pf->\tUnsigned:[%u(%d)]\n", ui, ui);
	len2 = printf(" pf->\tUnsigned:[%u(%d)]\n", ui, ui);
	printf("len(_pf): %d | len2(pf): %d\n\n", len, len2);
	return (0);
}
