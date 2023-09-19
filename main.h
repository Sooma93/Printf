#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
* struct flags - struct for flags
* @plus: flag for plus
* @space: flag for space
* @hash: flag for hash
*/
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
* struct printHandler - struct to choose handling function
* @c: specifier
* @f: pointer to handling function
*/
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;


int _putchar(char c);
int _puts(char *str);

int (*get_print(char s))(va_list, flags_t *);

int get_flag(char s, flags_t *f);

int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
int _printf(const char *format, ...);

/* integar */
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/* conerter */
char *convert(unsigned long int num, int base, int lowercase);
/* print_number */
int print_binary(va_list l, flags_t *f);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
#endif
