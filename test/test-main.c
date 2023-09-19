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

	len3 = _printf("_pf-> Length:[%d, %i]\n", len2, len2);
	len4 = printf("  pf-> Length:[%d, %i]\n\n", len2, len2);
	printf("pf-> len3: %d(%i) | len4: %d(%i)\n", len3, len3, len4, len4);
	_printf("_pf-> len3: %d(%i) | len4: %d(%i)\n\n", len3, len3, len4, len4);

	len = _printf("-pf-> Negative: [%d(%i)]\n", -762534, -762534);
	len2 = printf(" pf-> Negative: [%d(%i)]\n", -762534, -762534);
	printf("_pf->len: %d | pf->len: %d\n\n", len, len2);

	_printf("_pf-> String:[%s]\n", "I am a string !");
	printf("  pf-> String:[%s]\n\n", "I am a string !");

	_printf("_pf-> Character:[%c]\n", 'H');
	printf(" pf-> Character:[%c]\n", 'H');
	printf("\n");

	len = _printf("_pf-> Percent:[%%]");
	printf(" | ");
	len2 = printf(" pf-> Percent:[%%]");
	printf("\n");

	_printf("_pf-> Len:[%d] | ", len);
	printf("  pf-> Len:[%d]\n", len2);
	printf("\n");

	len = _printf("_pf->\tUnsigned:[%u(%d)]\n", ui, ui);
	len2 = printf(" pf->\tUnsigned:[%u(%d)]\n", ui, ui);
	printf("len(_pf): %d | len2(pf): %d\n\n", len, len2);
	return (0);
}
