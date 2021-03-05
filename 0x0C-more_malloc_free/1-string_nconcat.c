#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1:  string 1.
 * @s2:  string 2.
 * @n: s2 in s1.
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j = n, i;

if (s1 == NULL)
		{
		s1 = "";
		}

	if (s2 == NULL)
		{
		s2 = "";
		}

	for (i = 0; s1[i]; s1++)
		{
		j++;
		}

	ptr = malloc(sizeof(char) * (j + 1));

	if (ptr == NULL)
		{
		return (NULL);
		}

	j = 0;

	for (i = 0; s1[i]; i++)
		{
		ptr[j++] = s1[i];
		}

	for (i = 0; s2[i] && i < n; i++)
		{
		ptr[j++] = s2[i];
		}

	ptr[j] = '\0';

		return (ptr);
}
