#include "holberton.h"
/**
 * _strcmp- function that compares two strings
 *@s1: first string
 *@s2: second string
 *Return: a comparative function.
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sum = 0;

while (s1[i] != '\0')
	{
if (s1[i] != s2[i])
{
	sum = s1[0] - s2[0];
	return (sum);
}
i++;
}
return (sum);
}
