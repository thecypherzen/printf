#ifndef _PRINTF_H
#define _PRINTF_H

/* headers */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
typedef unsigned int _uint;
typedef unsigned long int _ulint;
/**
 * struct functions - data type for functions
 * @flag: string of flags
 * @func: corresponding function for the flag
 */
typedef struct functions
{
	char *flag;
	int (*func)(int, ...);
} fs_type;
int _printf(const char *format, ...);
int _strlen(char *s);
char check_specifier(char c, char *single, char *prefix,
		     int *is_single, int r, int *halt);
int (*f_selectr(char *str, int idx))(va_list list, int b_index, ...);
int get_specifiers(char *dest, const char *format, int index);
void reset_specifiers(char *fmtstr, int sz);
int writechar(va_list list, int b_index, ...);
int writestr(int b_index, ...);
int print_buffr(char *buffr, int size);
int printf_failed(char *buffr, int size);
int format_printr(va_list, char);
int print_int(int, int);
char *base_c(_uint, _uint, int);
_uint get_rem(_uint *, _uint *, _uint, int);
void rev_string(char *s);
int base_printr(_uint num, _uint obase, int is_uppr);
int print_S(char *str);
#endif
