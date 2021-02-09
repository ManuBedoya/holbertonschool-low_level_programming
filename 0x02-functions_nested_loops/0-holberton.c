#include "holberton.h"

/**
 *main - Print message
 *
 *Return: 0 always
 */
int main(void)
{
	int position;
	char message[] = "Holberton";

	for (position = 0; position < 9; position++)
	{
		_putchar(message[position]);
	}
	_putchar('\n');
	return (0);
}

