#include "holberton.h"
/**
* _islower - check the code for Holberton  if it is a lowercase character.
*@c: takes in a character
* Return: 1 if its true 0 its not.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
