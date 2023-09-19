#include "main.h"
/**
 * covert - convert num into string
 * @num: input
 * @base: input
 * @lowercase: if need lowercase
 * Return: string
 */
char *covert(unsigned long int num, int base, int lowercase )
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
