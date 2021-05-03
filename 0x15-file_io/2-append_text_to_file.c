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
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: content of the text.
 * Return: 1 / -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, lenght;

	if (!filename)
	{
		return (-1);
	}
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		if (close(i) == -1)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
		lenght = _str_len(text_content);
		j = write(i, text_content, lenght);
		if (j == -1)
		{
			return (-1);
		}
		close(i);
		return (1);
}
