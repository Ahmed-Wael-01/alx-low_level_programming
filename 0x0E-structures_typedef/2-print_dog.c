#include "dog.h"
#include <stdio.h>

/**
 * print_dog - initialize dogs
 * @d: a var
 *
 * Description: it sets the value of functions inside the structure
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->age != 0)
			printf("Name: %s\nAge: %f\nOwner: %s\n", (d->name ? d->name : "(nil)"),
				d->age, (d->name ? d->name : "(nil)"));
		else
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", (d->name ? d->name : "(nil)"),
					(d->name ? d->name : "(nil)"));
	}
}
