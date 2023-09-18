#include "main.h"
#include <stdio.h>

/**
 * main - test code
 * Return: 0 always
 */
int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("len1: %d | len2: %d\n", len, len2);

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("%d %d\n", len, len2);
	return (0);
}
