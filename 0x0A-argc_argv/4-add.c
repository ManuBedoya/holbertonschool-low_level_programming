#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - Entry point
 *@argc: Number of line commands
 *@argv: Store of the commands line
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	unsigned int j = 0;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("0\n");
				return (0);
			}
		add += atoi(argv[i]);
	}
	printf("%i\n", add);
	return (0);
}
