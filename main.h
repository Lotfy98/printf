#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>


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
int parser(const char *format, convert_specs func_list[], va_list args);

#endif
