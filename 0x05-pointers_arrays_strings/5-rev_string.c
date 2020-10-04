#include "holberton.h"
/**
 * rev_string - reverse a string
 *@s: reverse string
 *Return: notrebloh
 */
void rev_string(char *s)
{
	int lenght, i;
	char *begin, *end, temp;

	end = s;
	begin = s;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{
		end++;
	}
	end--;

	for (i = 0; i < lenght / 2 ; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
