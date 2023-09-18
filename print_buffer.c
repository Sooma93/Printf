#include "main.h"

/**
* print_buffer - A function that prints the buffer.
* @buffer: A pointer to the buffer.
* @nbuffer: Number of bytes to be printed.
* Return: Number of bytes to be printed.
*/
int print_buffer(char *buffer, unsigned int nbuffer)
{
	return (write(1, buffer, nbuffer));
}
