#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf(NULL);
    len2 = printf("%s\n", word);
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
     _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("\n0(_pf) ->\t hex:(%x, %X), oct: (%o), bin: (%b)\n\n", 0, 0, 0 , 0);
    printf("0(pf) ->\t hex:(%x, %X), oct: (%o), bin: (%d)\n\n", 0, 0, 0 , 0);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);


    printf("(pf)->\t31(%x), 127(%x) | 31(%X), 127(%X)\n", 31, 127, 31, 255);
    _printf("(_pf)->\t%S\n", "Best\nSchool");

    len = _printf("%K\n");
    len2 = printf("%K\n");
    printf("%d | %d\n", len, len2);
/*    len = _printf(“%c%c%c%c%s\n”, -48, 98, 99, 100, word);
    len2 = printf(“%c%c%c%c%s\n”, -48, 98, 99, 100, word);
    printf(“%d | %d\n”, len, len2);
    _printf("Unknown:[%r]\n");
      printf("Unknown:[%r]\n"); */
    return (0);
}
