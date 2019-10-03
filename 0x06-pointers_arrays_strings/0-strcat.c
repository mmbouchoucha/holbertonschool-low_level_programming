#include "holberton.h"

/**
 * _strcat - concatenate two strings
 * @dest: base string
 * @src: string to be added
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
int i, n;

i = 0;
while (dest[i] != '\0')
i++;
for (n = 0; src[n] != '\0'; n++)
{
dest[i] = src[n];
i++;
}
dest[i] = src[n];
return (dest);
}
