#include "main.h"
/**
 * print_unsigned - print un int
 * @l: argument
 * @f: pointer
 * Return: num of char
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}
