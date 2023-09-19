#include "main.h"
/**
 * print_binary - print binary
 * @l: argument
 * @f: pointer
 * Return: number
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return(_puts(str));
}
