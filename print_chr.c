#include "main.h"
#include <stdio.h>

/**
* print_chr - A function that prints a character.
* @arguments: input character.
* @buffer: A pointer to buffer.
* @ibuffer: An index of the buffer pointer.
* Return: 1 on success.
*/
int print_chr(va_list arguments, char *buffer, unsigned int ibuffer)
{
	char c;

	c = va_arg(arguments, int);
	handle_buffer(buffer, c, ibuffer);

	return (1);
}
