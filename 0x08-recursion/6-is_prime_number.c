#include "holberton.h"
/**
 * _prime - Returns 1 if the input integer is a prime number
 * @prime:  number
 * @divisor:  divisor
 * Return: Returns 1 if is a prime number 0 otherwise
 */
int _prime(int divisor, int prime)
{
	if (prime == divisor)
		return (1);
	else if (prime % divisor == 0 || prime < 2)
		return (0);
	return (_prime(divisor + 1, prime));
}
/**
 * is_prime_number -returns 1 if the input integer is a prime number
 * @n:  number to be checked
 * Return: Returns 1 if is a prime number 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime(2, n));
}
