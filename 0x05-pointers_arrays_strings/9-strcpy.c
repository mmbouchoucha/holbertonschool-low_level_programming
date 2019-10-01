#include "holberton.h"

/**
 * _strcpy - copy one string to another
 * @dest: destination buffer
 * @src: string to be copied
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
int len;
int i;

len = 0;
while (*src != 0)
{
len++;
src++;
}
src -= len;
i = 0;
while (i <= len)
{
dest[i] = src[i];
i++;
}
return (dest);
}
