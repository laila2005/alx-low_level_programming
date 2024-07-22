#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the dog's name
 * @age: Age of the dog (in years)
 * @owner: Pointer to the owner's name
 *
 * Description: This function initializes the members of a struct dog
 * with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
