#include "main.h"

/**
 * print_address - prints an address in hexadecimal.
 * @l: list of arguments.
 * @f: pointer to struct flags.
 * Return: number of characters printed.
 */
int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int ptr = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!ptr)
		return (_puts("(nil)"));

	str = convert(ptr, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
