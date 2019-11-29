#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: p to num being examined
 * @index: index
 *
 * Return: 1 if correct, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long) * 8)
return (-1);
*n = *n | (1 << index);
return (1);
}
