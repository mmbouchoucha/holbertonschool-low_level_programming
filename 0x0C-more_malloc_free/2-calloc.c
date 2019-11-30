#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - alloc memo for an arr, using malloc
 * @nmemb: num of elem in the arr
 * @size: size in bytes of the elem
 *
 * Return: void pointer to allocated memory
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
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}
