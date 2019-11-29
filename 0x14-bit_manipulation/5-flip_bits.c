#include "holberton.h"

/**
 * get_bit - find the value of a bit
 * @n: num being examined
 * @index: index
 *
 * Return: value of bit in @index, or -1 in error
 */
int get_bit(unsigned long int n, unsigned int index)
{
int i;

if (index > sizeof(long) * 8)
return (-1);
i = n >> index & 1;
return (i);
}

/**
 * flip_bits - find the num of bits you would need to flip to get
 * from one num to another.
 * @n: first num
 * @m: second num
 *
 * Return: num of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count, i;

count = 0;
i = (sizeof(unsigned long) * 8);
while (i > 0)
{
if (get_bit(n, 0) != get_bit(m, 0))
count += 1;
n = n >> 1;
m = m >> 1;
i--;
}
return (count);
}
