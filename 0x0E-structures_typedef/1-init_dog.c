#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of dog type struct.
 * @d: pointer to struct dog type
 * @name: pointer to char dog's name
 * @age:  dog's age
 * @owner: pointer to char dog's owner
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
