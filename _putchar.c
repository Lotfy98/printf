#include "main.h"
#define BUFFER_SIZE 1024
char buffer[BUFFER_SIZE];
int buffer_index = 0;
/**
 * _putchar - write char c to stdout
 *
 * @c: char to print
 *
 * Return: on succes 1. and on error -1
 */
int _putchar(char c)
{
	if (buffer_index >= BUFFER_SIZE - 1 || c == '\n')
	{
		write(1, buffer, buffer_index);
		buffer_index = 0;
	}
	buffer[buffer_index++] = c;
	return (1);
}
