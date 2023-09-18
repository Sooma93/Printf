#include "main.h"
/**
 * putss - print str
 * @c: string
 * Return: num
 */
int putss(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			print_char(c[count]);
		}
	}
	return (count);
}
				
