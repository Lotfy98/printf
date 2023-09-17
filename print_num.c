#include "main.h"
/**
 *print_integer - prints an int
 *@list: list of args
 *Return: chars printed
 */
int print_integer(va_list list)
{
	long n = va_arg(list, int), t = n, i, pwr;
	int num = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar(n);
	}
	while (t != 0)
	{
		num++;
		t /= 10;
	}
	pwr = 1;
	i = 1;
	while (i < num)
	{
		pwr *= 10;
		i++;
	}
	for (i = pwr; i > 0; i /= 10)
		_putchar(48 + (n / i) % 10);

	return (num);
}
