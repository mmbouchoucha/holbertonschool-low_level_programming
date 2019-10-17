#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
  void *mem;

  mem = malloc(b);
  if (mem == NULL)
    exit(98);
  return (mem);
}
