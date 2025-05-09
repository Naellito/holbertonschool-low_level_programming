#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - struct type
 * @type: type
 * @f: function
 */

typedef struct type
{
	char *type;
	void (*f)(va_list args);
} type_t;

#endif
