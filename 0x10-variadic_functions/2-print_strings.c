#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints strings
 * @separator: Separators between strings
 * @n: Number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;
	char *aux;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		aux = va_arg(ap, char*);
		if (aux == NULL)
		{
			printf("(nil)");
			if (i + 1 != n && separator != NULL)
				printf("(nil)%s", separator);
		}

		else
		{
			printf("%s", aux);
			if (i + 1 != n && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
