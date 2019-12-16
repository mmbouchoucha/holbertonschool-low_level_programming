#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - check the code for Holberton School students.
 * @s: character
 * @accept: character
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int i, j;
  i = 0;
  while (*(s + i))
    {
      j = 0;
      while (*(accept + j))
	{
	  if (*(s + i) == *(accept + j))
	    {
	      break;
	    }
	  j++;
	}
      if (!*(accept + j))
	{
	  return (i);
	}
      i++;
    }
  return (i);
}
