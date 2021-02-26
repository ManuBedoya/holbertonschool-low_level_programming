#include <stdio.h>

/**
 *main - Entry point
 *@argc: Number of line commands
 *@argv: Store of the commands line
 *Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d", argc - 1);
	argv[argc - 1] = "\n";
	printf("%s", argv[argc - 1]);
	return (0);
}
