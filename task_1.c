#include "main.h"
/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_string(va_list list)
{

	int i = 0, l = 0;
	char *s;


	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		l += _putchar(s[i]);
		i++;
	}
	return (l);
}
/**
 * print_char - prints characters
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_char(va_list list)
{
	int c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
 * print_percent - prints a percent symbol
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_percent(va_list list)
{
(void)list;
_putchar('%');
return (1);
}
