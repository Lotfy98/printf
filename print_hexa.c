#include "main.h"

int print_hexa_upper(va_list list) {
    unsigned int num = va_arg(list, unsigned int);
    int x;
    char hex_char[] = "0123456789ABCDEF";
    int uppercase = 1;
    char buffer[16];
    int i = 0;

    if (num == 0) {
        _putchar('0');
        return (1);
    }


    while (num != 0) {
        int rem = num % 16;
        buffer[i] = hex_char[uppercase ? rem : rem + 10];
        num /= 16;
        i++;
    }

    for ( x= i - 1; x >= 0; x--) {
        _putchar(buffer[x]);
    }
return (i);
}
int print_hexa_lower(va_list list) {
    unsigned int num = va_arg(list, unsigned int);
    int x;
    char hex_char[] = "0123456789abcdef";
    int lowercase = 1;
    char buffer[16];
    int i = 0;

    if (num == 0) {
        _putchar('0');
        return (1);
    }


    while (num != 0) {
        int rem = num % 16;
        buffer[i] = hex_char[lowercase ? rem : rem + 10];
        num /= 16;
        i++;
    }

    for ( x= i - 1; x >= 0; x--) {
        _putchar(buffer[x]);
    }
return (i);
}
