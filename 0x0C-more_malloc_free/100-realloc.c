#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memo block using malloc and free
 * @ptr: p to previously alloc memo
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly alloc space
 *
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pointer;
unsigned int i, max = new_size;
char *old_pointer = ptr;

if (ptr == NULL)
{
pointer = malloc(new_size);
return (pointer);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);

pointer = malloc(new_size);
if (pointer == NULL)
return (NULL);
if (new_size > old_size)
max = old_size;
for (i = 0; i < max; i++)
pointer[i] = old_pointer[i];
free(ptr);
return (pointer);
}
