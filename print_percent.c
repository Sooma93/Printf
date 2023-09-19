#include "main.h"

/**
 * print_percent - prints a percent sign.
 * @l: list of arguments.
 * @f: pointer to struct flags.
 * Return: number of characters printed.
 */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	_putchar('%');
	return (1);
}
