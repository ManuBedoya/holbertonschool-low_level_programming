#include "holberton.h"

/**
 *jack_bauer - Calculate the hours and minutes
 *
 *
 *Return: 0 always
 */
void jack_bauer(void)
{
	char hours[] = "00";
	char minutes[] = "00";

	while (!(hours[0] == '2' && hours[1] == '4'))
	{
		_putchar(hours[0]);
		_putchar(hours[1]);
		_putchar(':');
		_putchar(minutes[0]);
		_putchar(minutes[1]);
		if (minutes[0] == '5' && minutes[1] == '9')
		{
			if (hours[1] == '9')
			{
				hours[0]++;
				hours[1] = '0';
			}
			else
			{
				hours[1]++;
			}

			minutes[0] = '0';
			minutes[1] = '0';
		}
		else
		{
			if (minutes[1] == '9')
			{
				minutes[0]++;
				minutes[1] = '0';
			}
			else
			{
				minutes[1]++;
			}
		}
		_putchar('\n');
	}
}
