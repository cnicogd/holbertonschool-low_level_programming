#include "variadic_functions.h"
/**
 *print_numbers - function that returns the sum of all its parameters.
 *@n: numbers tu be sum
 *@separator:  is the string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int  i;
	va_list values;

		va_start(values, n);
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(values, int));
			if (i < n - 1 && separator != NULL)
			printf("%s", separator);

		}
		printf("\n");
		va_end(values);
}
