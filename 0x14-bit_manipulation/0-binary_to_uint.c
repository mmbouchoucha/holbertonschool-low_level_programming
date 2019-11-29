#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned integer.
 * @b: binary representation of the num
 * Return: the converted number, 0 in character other than 0, 1 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int r = 0;
unsigned int len = 0, i;

if (b == NULL)
return (0);
while (b[len])
{
if (b[len] != '0' && b[len] != '1')
return (0);
len++;
}
len--;
for (i = 0; b[i]; i++, len--)
{
if (b[i] == '1')
r += 1 << len;
}
return (r);
}
