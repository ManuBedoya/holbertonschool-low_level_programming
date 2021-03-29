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
 * create_file - Create a file
 * @filename: Name of the file
 * @text_content: Content of the file
 * Return: -1 if fails or 1 if works
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	len = getLen(text_content);
	fd = open(filename, O_CREAT | O_WRONLY, 00600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
