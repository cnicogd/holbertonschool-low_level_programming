#include "variadic_functions.h"
/**
 * print_strings - function that returns the sum of all its parameters.
 *@n: string to be printed
 *@separator:  is the string to be printed between numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int  i;
	char *string;
	va_list values;

		va_start(values, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(values, char *);
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
			printf("%s", string);
			}
			if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		}
		printf("\n");
		va_end(values);
}
