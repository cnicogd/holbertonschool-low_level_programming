#ifndef VAR_H
#define VAR_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct fp - struct
 * @tp: character
 * @func: function pointer
 */
typedef struct fpos_t
{
	char *tp;
	void (*func)(va_list);
}fp;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
