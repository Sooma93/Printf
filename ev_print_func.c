#include "main.h"

/**
 * ev_print_func - Return the number of identifiers.
 * @s: Arugment identifier.
 * @index: Index of the argument identifier.
 * Return: Number of identifiers.
 */
int ev_print_func(const char *s, int index)
{
	print_t ptf[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex}, {"X", print_upx},
		{"S", print_usr}, {"p", print_add}, {"li", prinlint},
		{"ld", prinlint}, {"lu", prinlunt}, {"lo", prinloct},
		{"lx", prinlhex}, {"lX", prinlupx}, {"hi", prinhint},
		{"hd", prinhint}, {"hu", prinhunt}, {"ho", prinhoct},
		{"hx", prinhhex}, {"hX", prinhupx}, {"#o", prinnoct},
		{"#x", prinnhex}, {"#X", prinnupx}, {"#i", print_int},
		{"#d", print_int}, {"#u", print_unt}, {"+i", prinpint},
		{"+d", prinpint}, {"+u", print_unt}, {"+o", print_oct},
		{"+x", print_hex}, {"+X", print_upx}, {" i", prinsint},
		{" d", prinsint}, {" u", print_unt}, {" o", print_oct},
		{" x", print_hex}, {" X", print_upx}, {"R", print_rot},
		{"r", print_rev}, {"%", print_pct}, {"l", print_pct},
		{"h", print_pct}, {" +i", prinpint}, {" +d", prinpint},
		{"+ i", prinpint}, {"+ d", prinpint}, {" %", print_pct},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (ptf[i].type_arg)
	{
		if (s[index] == ptf[i].type_arg[j])
		{
			if (ptf[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}