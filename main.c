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
char str2[] = " ";
char *r = "1234";
char *nullString = NULL;
char h = '\0';


len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
_printf("r:[%s]\n", r);
printf("r:[%s]\n", r);
_printf("n:[%s]\n", nullString);
printf("n:[%s]\n", nullString);
_printf("Character:[%c]\n", h);
printf("Character:[%c]\n", h);

_printf("x:[%d]\n", x);
printf("x:[%d]\n", x);
_printf("xi:[%i]\n", x);
printf("xi:[%d]\n", x);

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
_printf("nul:%s\n", str2);
printf("nul:%s\n", str2);
return (0);
}
