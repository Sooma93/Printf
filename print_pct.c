#include "main.h"
#include <stdio.h>

/**
* print_pct - Handle percentage format.
* @a: Input character.
* @buffer: A pointer to buffer.
* @i: A pointer to buffer index.
* Return: 1 on success.
*/
int print_pct(va_list __attribute__((unused))a, char *buffer, unsigned int i)
{
	handle_buffer(buffer, '%', i);
	return (1);
}
