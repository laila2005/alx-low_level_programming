#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Represents information about a dog
 * @name: Pointer to the dog's name
 * @age: Age of the dog (in years)
 * @owner: Pointer to the owner's name
 *
 * Description: This structure defines the attributes of a dog,
 * including its name, age, and owner's name.
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner); 
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
