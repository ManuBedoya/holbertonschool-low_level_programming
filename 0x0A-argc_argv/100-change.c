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
	int amount;
	int sum = 0;
	int numberCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
		amount = 0;

	while (sum != amount)
	{
		if (sum + 25 <= amount)
			sum += 25;
		else if (sum + 10 <= amount)
			sum += 10;
		else if (sum + 5 <= amount)
			sum += 5;
		else if (sum + 2 <= amount)
			sum += 2;
		else if (sum + 1 <= amount)
			sum += 1;
		numberCoins++;
	}
	printf("%i\n", numberCoins);
	return (0);
}
