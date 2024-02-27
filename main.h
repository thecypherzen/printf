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
	int (*func)(va_list list, ...);
} fs_type;
int _printf(const char *format, ...);
int _strlen(char *s);
char check_specifier(char c, char *single, char *prefix,
		     int *is_single, int r, int *halt);
void flush_buffr(char *buffr, int size);
int func_selectr(va_list list, char *fmtstr, char *buffr, int *b_index);
_uint get_rem(_uint *, _uint *, _uint, int);
int printf_failed(char *buffr, int size);
int print_buffr(char *buffr, int size);
int set_specifiers(char *dest, const char *format, int idx);
int write_S(va_list list, ...);
int write_base_res(va_list list, ...);
int write_char(va_list list, ...);
int write_int(va_list list, ...);
int write_rev_str(va_list list, ...);
int write_rot(va_list list, ...);
int write_str(va_list list, ...);

int format_printr(va_list, char);
int print_int(int, int);
char *base_cal(_uint, _uint, int);

int base_printr(_uint num, _uint obase, int is_uppr);

#endif
