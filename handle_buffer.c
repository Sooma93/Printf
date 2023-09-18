#include "main.h"

/**
* handle_buffer - A function that handles the buffer.
* @buffer: A pointer to the buffer.
* @c: The character to be added to the buffer.
* @ibuffer: A pointer to the index of buffer.
* Return: Index of a pointer to buffer.
*/
unsigned int handle_buffer(char *buffer, char c, unsigned int ibuffer)
{
	if (ibuffer == 1024)
	{
		print_buffer(buffer, ibuffer);
		ibuffer = 0;
	}
	buffer[ibuffer] = c;
	ibuffer++;
	return (ibuffer);
}
