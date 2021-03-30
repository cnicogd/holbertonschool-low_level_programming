#include "holberton.h"
/**
 * _str_len - lwgnth of a string
 * @s:  pointer
 * Return: length of string
 */
int _str_len(char *s)
{
	int lenght = 0;

	while (s[length] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
/**
* read_textfile - eads a text file and prints it to the POSIX
* @filename: pointer
* @letters: print the poem
* Return: the poem
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	char *buffer;
	int i, j;

	buffer = malloc(sizeof(char) * letters);
	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (0);
	}
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	j = read(i, buffer, letters);
	if (j == -1)
	{
		return (0);
	}
	n = _str_len(buffer);
	n = write(STDOUT_FILENO, buffer, v);
	if (n == -1)
	{
		free(buffer);
		return (0);
	}
	if (close(i) == -1)
	{
		return (-1);
	}
	else
	{
		return (n);
	}
}
