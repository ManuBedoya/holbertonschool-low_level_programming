#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: Array of the arguments
 * Return: 0 or exit in several causes
*/
int main(int argc, char *argv[])
{
	int fdCreate, fdRead, n;
	char *buf[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	fdRead = open(argv[1], O_RDONLY);
	if (fdRead == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n", 45);
		exit(98);
	}
	fdCreate = open(argv[2], O_CREAT | O_WRONLY, 00664);

	if (fdCreate == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n", 39);
		exit(99);
	}
	n = read(fdRead, buf, 1024);
	buf[n] = '\0';
	write(fdCreate, buf, n);
	if (!(close(fdCreate) || close(fdCreate)))
	{
		write(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n", 39);
		exit(100);
	}
	return (0);
}
