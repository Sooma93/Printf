#include "main.h"

/**
* get_flags - turns flags on if any flag modifier is present.
* @s: string to check for flags.
* @f: a pointer to struct flags.
*
* Return: 1 if flag is present, 0 if not.
*/
int get_flags(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
