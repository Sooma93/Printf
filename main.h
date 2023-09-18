#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - Struct that maps to a print function
 * @type_arg: Printer identifier
 * @f: A pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_pct(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buffer, unsigned int ibuffer);
int print_str(va_list arguments, char *buffer, unsigned int ibuffer);

unsigned int handle_buffer(char *buffer, char c, unsigned int ibuffer);
int print_buffer(char *buffer, unsigned int nbuffer);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);

#endif