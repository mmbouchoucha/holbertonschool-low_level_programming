#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocate memo using malloc
 * @b: amount of memo
 *
 * Return: p to alloc memo
 */
void *malloc_checked(unsigned int b)
{
void *mem;

mem = malloc(b);
if (mem == NULL)
exit(98);
return (mem);
}
