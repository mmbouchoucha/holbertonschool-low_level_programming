#include "function_pointers.h"

/**
 * array_iterator - exec a func given as a param on each elem of arr
 * @array: array to exec func on
 * @size: size of array
 * @action: p to the func to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
