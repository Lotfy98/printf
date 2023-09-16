#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *struct convert - convert specifier
 *@sym: letter
 *@f: function
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
} convert_specs;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif
