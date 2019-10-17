#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - alloc memory for array
 * @nmemb: numbr of elem
 * @size: size of bytes of each elem
 *
 * Return: p to alloc memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
i = 0;
while (i <= (nmemb * size))
{
p[i] = 0;
i++;
}
return (p);
}
