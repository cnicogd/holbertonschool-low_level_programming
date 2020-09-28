#include "holberton.h"
/**
* islower - check the code for Holberton School students if it is a lowercase character.
*
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
return(0);
}
} 
