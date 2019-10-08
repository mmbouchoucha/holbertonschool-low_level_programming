#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - find the first occurence of a character in a string
 * @s: string being examined
 * @c: character
 *
 * Return: char pointer
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
else
return (NULL);
}
