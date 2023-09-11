#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - initialize dogs
 * @name: a var
 * @age: a var
 * @owner: a var
 *
 * Description: it sets the value of functions inside the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
