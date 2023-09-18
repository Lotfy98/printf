#include "main.h"

/**
 * _putchar - write char c to stdout
 *
 * @c: char to print
 *
 * Return: on succes 1. and on error -1
 */
int _putchar(char c)
{

	static char buffer[1024];
	static int buffer_index;

	if (buffer_index >= 1024 || c == '\n')
	{
		write(1, &buffer, buffer_index);
		buffer_index = 0;
	}
	buffer[buffer_index++] = c;
	return (1);
}
