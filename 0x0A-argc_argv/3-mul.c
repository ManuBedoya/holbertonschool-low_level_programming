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
		printf("%i\n", atoi(argcv[1]) * atoi(argcv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
