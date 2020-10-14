#include "holberton.h"

/**
 *_strchr - function that locates a character in a string.
 *@s: string
 *@c: char to be check
 *Return: locate the char
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;

while (s[i] != '\0')
{
    if(s[i] == accept)
    return(s[i]);
    i++
}


}