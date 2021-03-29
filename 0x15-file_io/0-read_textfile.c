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
	ssize_t nRead, nWrite;
	char *buf;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	nRead = read(fd, buf, letters);
	if (nRead == -1)
		return (0);
	close(fd);
	free(buf);
	nWrite = write(STDOUT_FILENO, buf, nRead);
	if (nWrite == -1 || nRead != nWrite)
		return (0);
	return (nWrite);
}
