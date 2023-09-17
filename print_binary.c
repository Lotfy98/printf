#include "main.h"

/**
 * print_binary - prints binary number
 * @list: list of args
 * Return:  binary_num
 */

int print_binary(va_list list)
{
unsigned int dec_num = va_arg(list, unsigned int);
int binary_num = 0;

if (dec_num == 0)
{
putchar('0');
binary_num++;
}
else
{
int binary[64];
int l = 0;

while (dec_num > 0)
{
binary[l++] = dec_num % 2;
dec_num /= 2;
}

for (l--; l >= 0; l--)
{
_putchar('0' + binary[l]);
binary_num++;
}
}
return (binary_num);
}
