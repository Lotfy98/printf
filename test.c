#include "main.h"
#include <stdio.h> 
#include <stdarg.h>



int main() {
    int x = 42;
    char* message = "Hello, World!";

    
    _printf("Integer: %d\n", x);
    _printf("String: %s\n", message);
    _printf("Integer: %d, String: %s\n", x, message);
   
   _printf("Empty format string: %d\n", 123);
   _printf("Format specifier without argument: %s\n");
   
   
    printf("Standard Integer: %d\n", x);
    printf("Standard String: %s\n", message);
   printf("Integer: %d, String: %s\n", x, message);
   printf("Empty format string: %d\n", 123);

   
   
   printf("Format specifier without argument: %s\n");
    return 0;
}
