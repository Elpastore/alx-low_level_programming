#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct prints - structure that store a char and function pointer
 * @c: char
 * @f: pointer to function
 */
typedef struct prints
{
	char *c;
	void (*f)(va_list args);
} print_el;
/*
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;
*/
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
