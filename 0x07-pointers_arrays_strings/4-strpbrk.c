#include "holberton.h"

/**
 *_strchr - function that locates a character in a string.
 *@s: string
 *@accept: bytes returned by the string if the first occurence is detected
 *Return: locate the char
 */
char *_strpbrk(char *s, char *accept)
    {
    int i, j;

    for (i = 0 ; s[i] != '\0' ; s++)
    {
        for (j = 0 ; accept[j] != '\0' ; j++)
        {
            if (s[i] == accept[j])
            {
            return (s);
            }
            else if (s[i] == '\0')
            {
            return ('\0');
            }
        }
    }