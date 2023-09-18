#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int print_pct(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buffer, unsigned int ibuffer);
int print_str(va_list arguments, char *buffer, unsigned int ibuffer);

unsigned int handle_buffer(char *buffer, char c, unsigned int ibuffer);
int print_buffer(char *buffer, unsigned int nbuffer);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);

#endif