#include "main.h"
/**
* print_reverse - prints a string in reverse order.
* @l: list of arguments.
* @f: pointer to struct flags.
* Return: number of characters printed.
*/
int print_reverse(va_list l, flags_t *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
