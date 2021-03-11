#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *aux;
	char form = format[i], temp = format[i + 1];

	va_start(ap, format);
	while (form)
	{
		switch (form)
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
		if (temp == NULL && (form == 'i' || form == 'f' || form == 'c'
		|| form == 's'))
				printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
