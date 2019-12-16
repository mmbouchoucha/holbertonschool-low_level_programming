#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - check the code for Holberton School student
 * @s: char
 * @c: char
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
  int i = 0;
  while (*(s + i))
    {
      if (*(s + i) == c)
	return (s + i);
      i++;
    }
  if (*(s + i) == c)
    return (s + i);
  return (0);
}
