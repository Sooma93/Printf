#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>




int print_char(char c);
int _printf(const char *format, ...);
int print_percent(va_list args);

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

#endif /* MAIN_H */
