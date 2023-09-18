#include "main.h"

/**
* _printf - A replica of C printf function.
* @format: A string containing all the desired characters
* Return: The number of characters printed (excluding the null byte used to
* end output to strings) or -1 if an error occurs.
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibuffer = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{	print_buffer(buffer, ibuffer), free(buffer), va_end(arguments);
				return (-1);
			}
			else
			{	function = get_print_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handle_buffer(buffer, format[i], ibuffer), len++, i--;
				}
				else
				{	len += function(arguments, buffer, ibuffer);
					i += ev_print_func(format + i + 1);
				}
			}
			i++;
		}
		else
			handle_buffer(buffer, format[i], ibuffer), len++;
		for (ibuffer = len; ibuffer >= 1024; ibuffer -= 1024)
			;
	}
	print_buffer(buffer, ibuffer), free(buffer), va_end(arguments);
	return (len);
}
