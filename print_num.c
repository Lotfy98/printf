#include "main.h"
/**
 *print_integer - prints an int
 *@list: list of args
 *Return: chars printed
 */
int print_integer(va_list list)
{
	int x, y, l, n;
	int num[100];

	if (num == NULL)
	{
		return (0);
	}
	n = va_arg(list, int);
	l = 0;
	if (n < 0)
	{
		l += _putchar('-');
		n *= -1;
	}
	x = 0;
	while (n != 0)
	{
		num[x] = n % 10;
		n /= 10;
		x++;
	}
	y = x - 1;
	while (y >= 0)
	{
		l += _putchar(48 + num[y]);
		y--;
	}
	return (l);
}
