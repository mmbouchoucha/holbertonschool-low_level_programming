#include "holberton.h"

/**
 * get_bit - find the value of a bit
 * @n: num being examined
 * @index: index
 *
 * Return: value of bit at @index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
int i;

if (index > sizeof(long) * 8)
return (-1);
i = n >> index & 1;
return (i);
}
