#include "main.h"

/**
 * print_octal - print octal num
 * @list: numbers to be converted
 * Return: num
 */

int print_octal(va_list list)
{
    int x = 0, y, l = 0;
    unsigned int oct[100];
    unsigned int n;

    n = va_arg(list, unsigned int);

    if (!n)
        return (_putchar('0'));

    while (n != 0)
    {
        oct[x] = n % 8;
        n /= 8;
        x++;
    }
    y = x - 1;

    while (y >= 0)
    {
        l += _putchar(oct[y] + '0');
        y--;
    }

    return (l);
}
