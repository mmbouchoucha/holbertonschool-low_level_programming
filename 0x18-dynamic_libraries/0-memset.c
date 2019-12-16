#include "holberton.h"

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: fdfdfdfs
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
