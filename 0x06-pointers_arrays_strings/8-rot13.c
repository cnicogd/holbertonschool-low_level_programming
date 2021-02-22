#include "holberton.h"

/**
 *rot13 - function that encodes a ROT13.
 *
 * @s: String
 * Return: String
 */
char *rot13(char *s)
{
	char arr1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char arr2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i, j;

	for (i = 0; s[i] != '\0';i++)
	{
		for (j = 0; arr2[j] != '\0';j++)
		{
			if (s[i] == arr2[j])
			{
				s[i] = arr1[j];
				break;
			}
		}
	}
	return (s);
}