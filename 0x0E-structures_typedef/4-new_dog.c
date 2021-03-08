#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - To create a new dog
 *@name: Name
 *@age: Age
 *@owner: Owner
 *Return: The new Dog!
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
