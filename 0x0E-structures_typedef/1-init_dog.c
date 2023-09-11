#include "dog.h"

/**
 * init_dog - initialize dogs
 * @d: a var
 * @name: a var
 * @age: a var
 * @owner: a var
 *
 * Description: it sets the value of functions inside the structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
