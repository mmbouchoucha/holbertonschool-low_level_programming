#include "holberton.h"

/**
 * _memcpy - copy n bytes from src to dest with no overlap
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 *
 * Return: char pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
