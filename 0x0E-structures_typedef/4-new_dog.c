#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - initialize dogs
 * @name: a var
 * @age: a var
 * @owner: a var
 *
 * Description: it sets the value of functions inside the structure
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (!newDog || name == NULL || owner == NULL)
		return (NULL);
	newDog->name = malloc(strlen(name) + 1);
	newDog->owner = malloc(strlen(owner) + 1);
	if (newDog->name == NULL || newDog->owner == NULL)
		return (NULL);
	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
