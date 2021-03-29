#include "holberton.h"

/**
 * read_textfile - Read a file and print
 * @filename: The name of the file
 * @letters: number of letter to read
 * Return: 0 if fails or the number of the print letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	char *buf[letters + 1];
	int fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	n = read(fd, buf, letters);
	buf[n] = '\0';
	close(fd);
	n = write(STDOUT_FILENO, buf, (n - 1));
	return (n);
}
