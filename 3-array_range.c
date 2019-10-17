#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create an array of int
 * @min: min number of int
 * @max: max number of int
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
  int *array;
  int array_size, i, counter;

  if (min > max)
    return (NULL);
  array_size = (max - min) + 1;
  array = malloc(array_size * sizeof(*array));
  if (array == NULL)
    return (NULL);
  i = min;
  counter = 0;
  while (counter <= array_size)
    {
      if (counter == 0)
	array[counter] = min;
      else if  (counter == array_size)
	array[counter] = max;
      else
	array[counter] = i;
      i++;
      counter++;
    }
  array[counter] = '\0';
  return (array);
}
