#ifndef STRC
#define STRC

/**
 * struct dog - some structure
 * @name: a var
 * @age: a var
 * @owner: a var
 * Description: a structure for dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
