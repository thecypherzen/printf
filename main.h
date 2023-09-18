#ifndef _PRINTF_H
#define _PRINTF_H

/* headers */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int my_putchar(char);
int my_puts(char *);
#endif
