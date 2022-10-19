#ifndef V_FUNCTIONS_H
#define V_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct _spec
{
	char c;
	void (*func)(va_list, char *);
} _format;
void print_all(const char * const format, ...);
void print_all_char(const char *const a, ...);
#endif /*V_FUNCTIONS_H*/
