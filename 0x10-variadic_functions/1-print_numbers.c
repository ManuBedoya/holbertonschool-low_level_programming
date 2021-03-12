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

		va_list ap;
		unsigned int i;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(ap, int));
			if (i + 1 != n && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ap);
}
