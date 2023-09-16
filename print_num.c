#include "main.h"
/**
 *print_integer - prints an int
 *@list: list of args
 *Return: chars printed
 */
int print_integer(va_list list)
{
	int *num, x, y, l, n;

	num = malloc(sizeof(int) * 1000);
	if (!num)
	{
		free(num);
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
		l += _putchar('0' + num[y]);
		y--;
	}
	free(num);
	return (l);
}
