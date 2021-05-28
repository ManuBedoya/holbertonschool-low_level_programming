#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdarg.h>

/**
 * print_all - Function that prints any type of data
 * @format: format in string
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *aux;

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 's':
			aux = va_arg(ap, char *);
			if (aux == NULL)
				aux = "(nil)";
			printf("%s", aux);
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		default:
			break;
		}
		if (format[i + 1] && (format[i] == 'i' || format[i] == 'f' ||
			format[i] == 'c' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
