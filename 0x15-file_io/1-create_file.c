#include "holberton.h"
/**
 * _str_len - lwgnth of a string
 * @s:  pointer
 * Return: length of string
 */
int _str_len(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
/**
* create_file - function that creates a file.
* @filename: name of the file
* @text_content: content of textfile
* Return: 1 / -1;
*/
int create_file(const char *filename, char *text_content)
{
	int n, lenght, i;

	if (filename == NULL)
	{
		return (-1);
	}
	n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (n == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		if (close(n) == -1)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
	lenght = _str_len(text_content);
	i = write(n, text_content, lenght);
	if (i == -1)
	{
		return (-1);
	}
	return (1);
}
