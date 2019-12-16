#include "holberton.h"
#include <stdio.h>
/**
 * *_strpbrk - check the code for Holberton School students.
 * @s: char
 * @accept: char
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
  unsigned int i, j;
  for (i = 0; s[i]; i++)
    {
      for (j = 0; accept[j]; j++)
	{
	  if (s[i] == accept[j])
	    return (s + i);
	}
    }
  return (0);
}
