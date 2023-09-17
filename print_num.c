#include "main.h"
#include <math.h>
/**
 *print_integer - prints an int
 *@list: list of args
 *Return: chars printed
 */
int print_integer(va_list list)
{
	long n = va_arg(list, int), t = n, i;
	int num = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar(48);
	}
	while (t != 0)
	{
		num++;
		t /= 10;
	}
	i = pow(10, num - 1);
	while (i > 0)
	{
		_putchar(48 + (n / i) % 10);
		i /= 10;
	}
	return (num);
}
