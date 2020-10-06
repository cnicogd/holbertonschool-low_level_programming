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

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
if (s1[1] == '\0')
{
	return (0);

}
sum = s1[1] - s2[i];
return (sum);
}
