#include "main.h"

/**
 * main - Entry point
 * Description goes here
 * Return: 0 always
 */
void reset_specifiers(char *fmtstr, int sz)
{
	int i;

	for (i = 0; i < sz; i++)
		fmtstr[i] = '\0';
}
