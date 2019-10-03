#include "holberton.h"

/**
 * reverse_array - reverse the order of the contents of an array
 * @a: array
 * @n: number of elements in the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i, j;

i = 0;
n = n - 1;
while (i <= n)
{
j = a[i];
a[i] = a[n];
a[n] = j;
i++;
n--;
}
}
