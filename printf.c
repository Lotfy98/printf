#include "main.h"

/**
 * _printf - custom printf function
 * @format: format.
 * Return: Printed printed_chars
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	/* array linking characters to respective function*/
	convert_specs func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{"b", print_binary},
		{"u", print_unsigned},
		{"x", print_hexa_lower},
		{"X", print_hexa_upper},
		{"o", print_octal},
		{"S", print_str_ascii},
		{"p", print_pointer},
		{NULL, NULL}
	};
		/* creating va_list*/
	va_list args;

	/* string in format is null*/
	if (format == NULL)
		return (-1);

	va_start(args, format);
	/* Calling parser function */
	printed_chars = parser(format, func_list, args);
	va_end(args);
	return (printed_chars);
}
