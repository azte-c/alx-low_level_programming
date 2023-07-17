#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - access the variable of the type dog
 * @d: pointer to dog
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
