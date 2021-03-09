#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Init the caracteristic of the dog
 *@d: structure dog
 *@name: Name
 *@age: age
 *@owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok");
		exit(0);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
