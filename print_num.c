#include "main.h"
/**
 *print_integer - prints an int
 *@list: list of args
 *Return: chars printed
 */
int print_integer(va_list list)
{
	long n = va_arg(list, int);
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
	long t = n;

	while (t != 0)
	{
		num++;
		t /= 10;
	}
	long i = pow(10, num - 1);

	while (i > 0)
	{
		_putchar(48 + (n / i) % 10);
		i /= 10;
	}
	return (num);
}
