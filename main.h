#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct convert - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @a: format specifier
 * @f: point to the correct printing function
 */

typedef struct convert
{
	char *a;
	int (*f)(va_list);
} conv_a;

int _putchar(char c);
int conv_c(va_list);
int conv_s(va_list);
int conv_p(va_list);
int conv_d(va_list);
int print_b(va_list);
int print_o(va_list);
int print_x(va_list);
int get_func(const char *format, va_list args, conv_a b[]);
int _printf(const char *format, ...);

#endif
