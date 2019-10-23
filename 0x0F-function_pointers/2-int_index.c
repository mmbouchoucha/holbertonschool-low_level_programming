#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for integer in an array
 * @array: array name
 * @size: number of array elements
 * @cmp: pointer to function
 *
 * Return: index of first int value, 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
i = 0;
while (i < size)
{
cmp(array[i]);
if (cmp(array[i]) != 0)
return (i);
i++;
}
return (-1);
}
