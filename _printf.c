#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
* _printf - a replica of the C standard library printf() function.
* @format: a string containing zero or more directives to print.
* Return: the number of characters printed.
*/
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments_list;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments_list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
						 ? pfunc(arguments_list, &flags)
						 : _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(arguments_list);
	return (count);
}
