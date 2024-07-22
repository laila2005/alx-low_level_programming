#ifndef DOG_H
#define DOG_H
#include <stdio.h>


struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner); 
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
