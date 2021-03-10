#include "function_pointers.h"

/**
 * print_name - Function that call another function
 * @name: Name
 * @f: The function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
