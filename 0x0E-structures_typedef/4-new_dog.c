#include "dog.h"
#include <stdio.h>

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
	dog_t newDog = {name, age, owner};
	if (!new_dog)
		return (NULL);
	else
		return (&newDog);
}
