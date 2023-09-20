#ifndef _PRINTF_H
#define _PRINTF_H

/* headers */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
typedef unsigned int _uint;

int _printf(const char *format, ...);
int my_putchar(char);
int my_puts(char *);
int format_printr(va_list, char);
int print_int(int, int);
char *base_c(_uint, _uint, int);
_uint get_rem(_uint *, _uint *, _uint, int);
void rev_string(char *s);
int _strlen(char *s);
int base_printr(_uint num, _uint obase, int is_uppr);
int print_S(char *str);
#endif
