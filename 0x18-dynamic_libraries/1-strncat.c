#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - check the code for Holberton School students.
 * @dest: string
 * @src: string
 * @n: integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
  int i = 0;
  int j = 0;
  while (*(dest + i) != '\0')
    {
      i++;
    }
  while (*(src + j) != '\0' && j < n)
    {
      *(dest + i) = *(src + j);
      j++;
      i++;
    }
  return (dest);
}
