#include "main.h"

/**
* get_print - returns a pointer to the correct print function.
* @s: format specifier.
* Return: pointer to correct print function.
*/
int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent}
	};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}