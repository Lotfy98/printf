#include"main.h"
/**
*print_pointer-handles"p"specifier
*@list:variadiclist
*Return:address
*/
int print_pointer(va_listlist)
{
	void *address;
	char buffer[20], hex[] = "0123456789abcdef";
	unsigned long int i;
	int x = 0, y;

	address = va_arg(list, void*);
	i = (unsigned long int)address;

	if (!address)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}
	_putchar('0');
	_putchar('x');
	while (i > 0)
	{
		buffer[x++] = hex[i % 16];
		i /= 16;
	}
	y = x - 1;
	while (y >= 0)
	{
		_putchar(buffer[y]);
		y--;
	}
	return (x + 2);
}
