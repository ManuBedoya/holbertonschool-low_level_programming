#ifndef DOG
#define DOG

/**
 *struct dog - Values of the dog
 *@name: Name
 *@age: Age
 *@owner: Owner
 *
 *Description: Structure of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

