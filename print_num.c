#include "main.h"
/**
 *print_integer - prints an int
 *@list: list of args
 *Return: chars printed
 */
int print_integer(va_list list)
{
	int number = va_arg(list, int);
	int count = 0, digit, divisor = 1;

	if (number < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (integer / divisor > 9)
		divisor *= 10;
	while (divisor > 0)
	{
		digit = number / divisor;
		_putchar('0' + digit);
		num %= divisor;
		divisor /= 10;
		count++;
	}
	return (count);
}
