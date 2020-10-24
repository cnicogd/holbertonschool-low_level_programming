#include "variadic_functions.h"
/**
 * sum_them_all -function that returns the sum of all its parameters.
 *@n: numbers tu be sum
 *Return: the sum of n numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result, i;
	va_list values;


	if (n == 0)
	return (0);
		va_start(values, n);
		for (i = 0; i < n; i++)
		{
			result = result + va_arg(values, int);

		}
		va_end(values);
		return (result);
	}
