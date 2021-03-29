#include "holberton.h"
#include <stdlib.h>

/**
 * read_textfile - Read a file and print
 * @filename: The name of the file
 * @letters: number of letter to read
 * Return: 0 if fails or the number of the print letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	char *buf;
	int fd;

	if (filename == '\0')
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	n = read(fd, buf, letters);
	if (n == -1)
		return (0);
	buf[n] = '\0';
	close(fd);
	free(buf);
	n = write(STDOUT_FILENO, buf, (n - 1));
	if (n == -1)
		return (0);
	return (n);
}
