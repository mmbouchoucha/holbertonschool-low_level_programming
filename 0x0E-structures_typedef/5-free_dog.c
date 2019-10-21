#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog from memory
 * @d: dog to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
