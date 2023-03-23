#include "variadic_functions.h"

void print_char(va_list str);
void print_int(va_list str);
void print_float(va_list str);
void print_string(va_list str);
void print_all(const char * const format, ...);

/**
 * print_char - prints characters of type char
 * @str: declaration of variadic function
 */
void print_char(va_list str)
{
	char l;

	l = va_arg(str, int);
	printf("%c", l);
}

/**
 * print_int - prints natural numbers of type int
 * @str: declaration of variadic function
 */
void print_int(va_list str)
{
	int i;

	i = va_arg(str, int);
	printf("%d", i);
}

/**
 * print_float - prints numbers with decimal points
 * @str: declaration of variadic function
 */
void print_float(va_list str)
{
	float f;

	f = va_arg(str, double);
	printf("%f", f);
}

/**
 * print_string - print array of charcters of type char
 * @str: declaration of variadic function
 */
void print_string(va_list str)
{
	char *s;

	s = va_arg(str, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 *   - c: char
 *   - i: integer
 *   - f: float
 *   - s: char * (if the string is NULL, print (nil) instead
 *   - any other char should be ignored
 *
 *   Print a new line at the end of your function
 */
void print_all(const char * const format, ...)
{
	va_list str;
	int i, l;
	char *separator = "";
	p_all next[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	void (*func)(va_list);

	va_start(str, format);

	l = 0;
	while (format != NULL && format[l] != '\0')
	{
		i = 0;
		while (i < 4 && *next[i].p != format[l])
			i++;
		if (i < 4)
		{
			printf("%s", separator);
			func = next[i].print;
			func(str);
			separator = ", ";
		}
		l++;
	}

	va_end(str);
	putchar('\n');
}
