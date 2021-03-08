#include "dog.h"

/**
 *init_dog - Init the caracteristic of the dog
 *@d: structure dog
 *@name: Name
 *@age: age
 *@owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
