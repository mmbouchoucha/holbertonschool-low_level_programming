#include "holberton.h"

/**
 * _strncat - similar to _strcat but with bytes
 * @dest: source string
 * @src: string to be concatenated
 * @n: number of bytes
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
i++;
for (j = 0; j < n; j++)
{
dest[i] = src[j];
i++;
}
if (dest[i - 1] != '\0')
dest[i] = '\0';
return (dest);
}