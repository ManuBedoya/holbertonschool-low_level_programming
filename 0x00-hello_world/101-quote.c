#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, ", 50);
	write(2, "2015-10-19\n", 12);
	return (1);
}
