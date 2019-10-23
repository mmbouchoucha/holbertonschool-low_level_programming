#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on each array element
 * @array: array name
 * @size: size of array
 * @action: pointer to function with int type argument, void return type
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
