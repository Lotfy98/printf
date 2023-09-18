#include <stdio.h>
#include "main.h"
int main() {
    int negative = -42;
    unsigned int zero = 0;
    int i = 42;
    unsigned int u = 12345;
    unsigned int hex = 0xDEADBEEF;
    unsigned int octal = 01234;
    unsigned int u3 = 4294967295;
    unsigned int max_octal = 017777777777;
    
    
    _printf("Max Octal Value: %o\n", max_octal);
    printf("Max Octal Value: %o\n", max_octal);
    _printf("Unsigned Integer 3: %u\n", u3);
    printf("Unsigned Integer 3: %u\n", u3);
    _printf("Zero Octal: %o\n", zero);
    printf("Zero Octal: %o\n", zero);
    _printf("Negative Integer as Octal: %o\n", negative);
    printf("Negative Integer as Octal: %o\n", negative);


    _printf("Integer: %d\n", i);
    printf("Integer: %d\n", i);
    _printf("Unsigned Integer: %u\n", u);
    printf("Unsigned Integer: %u\n", u);
  _printf("Hexadecimal: %x\n", hex);
    printf("Hexadecimal: %x\n", hex);
  _printf("Hexadecimal (uppercase): %X\n", hex);
    printf("Hexadecimal (uppercase): %X\n", hex);
    _printf("Octal: %o\n", octal);
    printf("Octal: %o\n", octal);
    
    _printf("Negative Integer u: %u\n", negative);
     printf("Negative Integer u: %u\n", negative);
     _printf("Negative Integer o: %o\n", negative);
    printf("Negative Integer o: %o\n", negative);
     _printf("Negative Integer x: %x\n", negative);
    printf("Negative Integer x: %x\n", negative);
    _printf("Negative Integer x: %X\n", negative);
    printf("Negative Integer x: %X\n", negative);
	 return (0);
}
