#include "main.h"

/**
* print_char - prints a character.
* @l: list of arguments.
* @f: pointer to struct flags.
* Return: number of characters printed.
*/
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
