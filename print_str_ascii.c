#include "main.h"
/**
 *print_str_ascii - function to  prints the string.
 *Non printable characters (0 < ASCII value < 32 or >= 127)
 *are printed this way: \x, followed by the ASCII code value in
 *hexadecimal (upper case - always 2 characters)
 *@list: variadic list
 *Return: string with ascii NPC
 */
int print_str_ascii(va_list list)
{
	char *str, n;
	int x = 0, c = 0;

	str = va_arg(list, char *);

	if (!str)
		str = "(null)";
	while (str[x])
	{
		n = str[x++];
		if ((n > 0 && n < 32) || n >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar("0123456789ABCDEF"[n / 16]);
			_putchar("0123456789ABCDEF"[n % 16]);
			c += 4;
		}
		else
		{
			_putchar(n);
			c++;
		}
	}
	return (c);
}
