#include "main.h"

/**
* print_str - A function that prints a string.
* @arguments: input string.
* @buffer: A pointer to buffer.
* @ibuffer: An index of the buffer pointer.
* Return: 1 on success.
*/
int print_str(va_list arguments, char *buffer, unsigned int ibuffer)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuffer = handle_buffer(buffer, nill[i], ibuffer);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuffer = handle_buffer(buffer, str[i], ibuffer);
	return (i);
}
