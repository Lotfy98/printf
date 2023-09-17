#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;
int x = 0;

int s = 55;


len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");

_printf("x:[%d]\n", x);
printf("x:[%d]\n", x);
_printf("xi:[%i]\n", x);
printf("xi:[%d]\n", x);
/* _printf("b:[%d]\n", b);*/
/*_printf("bi:[%i]\n", b);*/
_printf("s:[%d]\n", s);
_printf("si:[%d]\n", s);

_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("%b\n", 98);
_printf("%b\n", 25);
return (0);
}
