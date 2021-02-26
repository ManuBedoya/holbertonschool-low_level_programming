#include <stdio.h>

/**
 *main - Entry point
 *@argc: Number of line commands
 *@argv: Store of the commands line
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
