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
	if (separator != NULL)
	{
		va_list ap;
		unsigned int i;
		char *aux;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			aux = va_arg(ap, char*);
			if (aux == NULL)
				if (i + 1 != n)
					printf("(nil)%s", separator);
				else
					printf("(nil)");
			else
				if (i + 1 != n)
					printf("%s%s", aux, separator);
				else
					printf("%s", aux);
		}
		printf("\n");
		va_end(ap);
	}
}
