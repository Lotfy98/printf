#include "main.h"
/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_string(va_list list)
{
int i, l; 
char *s;
i = 0;
l = 0;

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
_putchar(va_arg(list, int));
return (1);
}

/**
 * print_percent - prints a percent symbol
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_percent(va_list list)
{
int percent;
percent = va_arg(list, int);
percent = 37;
_putchar(percent);
return (1);
}
