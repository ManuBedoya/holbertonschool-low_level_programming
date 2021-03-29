#include "holberton.h"
/**
 * getLen - Calculate the lenght of string
 * @content: Is the string
 * Return: The lenght of string
*/
int getLen(char *content)
{
	int i;

	for (i = 0; content[i]; i++)
	{}
	return (i);
}
/**
 * append_text_to_file - Append text to a file
 * @filename: Name of the file
 * @text_content: Content to add a file
 * Return: -1 if fails or 1 if works
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	len = getLen(text_content);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
