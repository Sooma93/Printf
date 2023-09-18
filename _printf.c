#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - replica of printf function.
 * @format: Character string to be printed.
 *
 * Return: The number of characters to be printed to stdout.
 */
int _printf(const char *format, ...)
{

	unsigned int i, s_count,  count = 0;
	 va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] != '%')
	{
	print_char(format[i]);
	}
	else if (format[i] == '%' && format[i + 1] == 'c')
	{
	print_char(va_arg(args, int));
	i++;
	}
	else if (format[i + 1] == 's')
	{
	s_count = puts(va_arg(args, char *));
	i++;
	count += (s_count - 1);
	}
	else if (format[i + 1] == '%')
	{
	print_char('%');
	}
	count += 1;
	}
	va_end(args);
	return (count);
}

