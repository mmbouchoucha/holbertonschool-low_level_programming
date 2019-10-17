#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocate memory for array using malloc
 * @nmemb: number of elements in the array
 * @size: size of bytes of each element
 *
 * Return: pointer to allocated memory
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
