#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: Array of the arguments
 * Return: 0 or exit in several causes
*/
int main(int argc, char *argv[])
{
	int fdCreate, fdRead, nRead, nWrite, nCloseR, nCloseC;
	char *buf[3000];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdRead = open(argv[1], O_RDONLY);
	nRead = read(fdRead, buf, 3000);
	if (fdRead == -1 || nRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdCreate = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	nWrite = write(fdCreate, buf, nRead);
	if (fdCreate == -1 || nWrite == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	nCloseC = close(fdCreate);
	nCloseR = close(fdRead);
	if (nCloseC == -1 || nCloseR == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdCreate);
		exit(100);
	}
	return (0);
}
