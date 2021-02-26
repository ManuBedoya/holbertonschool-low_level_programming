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
	int i = 0;
	int add = 0;

	while (argv[i][0] < '0' || argv[i][0] > '9')
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
		add += atoi(argv[i]);
	printf("%i\n", add);
	return (0);
}
