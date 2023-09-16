#include "main.h"

/**
 *parser - receives the main string and all the necessary parameters to
 *print a formatted string
 *@format: string to be printed
 *@func_list: array of conver_t structures
 *@args: list of variadic arguments
 *Return: amount of characters printed
 */
int parser(const char *format, convert_specs func_list[], va_list args)
{
	int i, e, result = 0, retValue;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			e = 0;
			while (func_list[e].sym)
			{
				if (format[i + 1] == func_list[e].sym[0])
				{
					retValue = func_list[e].f(args);
					if (retValue == -1)
						return (-1);
					result += retValue;
					i++; /*increment i when a valid format specifier is found*/
					break;
				} e++;
			}
			if (!func_list[e].sym && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					result += 2;
				}
				else
					return (-1);
			}
		}
		else
		{
			_putchar(format[i]);
			result++;
		}
	}
	return (result);
}
