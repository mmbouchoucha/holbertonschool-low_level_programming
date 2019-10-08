#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - print the diagonal numbers of a matrix
 * @a: array
 * @size: array size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i, init_value, sum, total;

i = 0;
init_value = 0;
sum = total = 0;

/* top left to bottom right */
while (i < (size * size))
{
init_value = a[i];
sum = sum + init_value;
i = i + size + 1;
}

/* top right to bottom left */
i = size - 1;
while (i < ((size * size) - 1))
{
init_value = a[i];
total = total + init_value;
i = i + (size - 1);
}
printf("%d, %d\n", sum, total);
}
