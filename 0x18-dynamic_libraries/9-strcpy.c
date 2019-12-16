#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: destination
 * @src: source
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
  int c = 0;
  int i;
  while (src[c] != '\0')
    c++;
  for (i = 0; i < c && src[i] != '\0'; i++)
    dest[i] = src[i];
  dest[i] = '\0';
  return (dest);
}
