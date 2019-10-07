#include "holberton.h"

/**
 * _memset - fill first n bytes of memory area
 * @s: char type pointer
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: char pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
