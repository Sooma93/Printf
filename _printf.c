#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * _printf - replica of printf function.
 * @format: Character string to be printed.
 *
 * Return: The number of characters to be printed to stdout.
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int printed_chars;

	printed_chars = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
				{
					int c = va_arg(args, int);
					putchar(c);
					printed_chars++;
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char*);
					fputs(s, stdout);
					printed_chars += strlen(s);
					break;
                }
				case '%':
				{
					putchar('%');
					printed_chars++;
					break;
				}
			}
		}
		else
		{
			putchar(*format);
			printed_chars++;
		}
		format++;
	}

	va_end(args);

	return (printed_chars);
}
