#ifndef _PRINT_F
#define _PRINT_F

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <math.h>


/**
 *struct convert - convert specifier
 *@sym: letter
 *@f: function
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert convert_specs;


int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list list);
int print_binary(va_list list);
int print_octal(va_list list);
int print_unsigned(va_list list);
int print_hexa_lower(va_list list);
int print_hexa_upper(va_list list);
int parser(const char *format, convert_specs func_list[], va_list args);

#endif
