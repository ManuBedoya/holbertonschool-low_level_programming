#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - function that Print numbers
 *@separator: Separator between numbers
 *@n: number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL && n != 0)
	{
		va_list ap;
		unsigned int i;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (i + 1 != n)
				printf("%i%s", va_arg(ap, int), separator);
			else
				printf("%i", va_arg(ap, int));
		}
		printf("\n");
		va_end(ap);
	}
}
