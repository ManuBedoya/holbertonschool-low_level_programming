#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: Number of line commands
 *@argv: Store of the commands line
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
