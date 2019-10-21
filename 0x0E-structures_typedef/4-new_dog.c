#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create a new dog structure
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: pointer to new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *new;

new = malloc(sizeof(struct dog));
if (new == NULL)
return (NULL);
new->name = name;
new->age = age;
new->owner = owner;
return (new);
}
