#include "main.h"

/**
* print_rot13 - prints a string in rot13.
* @l: list of arguments.
* @f: pointer to struct flags.
* Return: number of characters printed.
*/
int print_rot13(va_list l, flags_t *f)
{
	char *s;
	unsigned int i, j;
	char in[] =  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char out[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	(void)f;
	s = va_arg(l, char *);

	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == in[i])
					_putchar(out[i]);
			}
		}
	}
	return (i);
}