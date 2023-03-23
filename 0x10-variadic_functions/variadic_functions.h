#ifndef VARAIDIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct prints - a struct used to print
 * @p: specifies the datatype to be printed
 * @print: function pointer to a function that prints according to the datatype
 */
typedef struct prints
{
	char *p;
	void (*print)(va_list str);
} p_all;

void print_char(va_list str);
void print_int(va_list str);
void print_float(va_list str);
void print_string(va_list str);

void print_all(const char * const format, ...);

#endif
