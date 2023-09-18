#include "main.h"

/**
 * print_unsigned - print unsigned num
 * @list: unsigned to be converted
 * Return: num
 */
int print_unsigned(va_list list)
{
	int x = 0, l = 0, y, *num;
	unsigned int n;

	num = malloc(sizeof(int) * 100);
	if (num == NULL)
		return (0);

	n = va_arg(list, unsigned int);
	while (n != 0)
	{
		num[x] = n % 10;
		n /= 10;
		x++;
	}
	y = x - 1;
	while (y >= 0)
	{
		l += _putchar(num[y] + 48);
		y--;
	}
	free(num);
	return (l);
}
